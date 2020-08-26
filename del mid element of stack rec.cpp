#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &s , int k)
{
	if(k==1)
	{
		s.pop();
		return;
}
	int temp= s.top();
	s.pop();
	solve(s,k-1);
	s.push(temp);
	
}
stack<int> del_mid(stack<int> s, int size)
{
	if(s.size() == 0)
	return s;
	int k = s.size()/2 +1;
	//deleting kth element from top of the stack 
    solve(s,k);
    return s;
}
int main()
{
	cout<<"Enter the number of elements in stack : ";
	int n;
	cin>>n;
	stack<int> s;
	cout<<"Enter the elements : ";
	
	for(int i = 0;i<n;i++)
	{
		int a;
		cin>>a;
		s.push(a);
	}
	s  = del_mid(s,n);
	if(s.size() == 0)
	cout<<"Stack underflow";
	else 
	{
		while(!s.empty())
		{
		cout<<s.top()<<" ";
		s.pop();
	}
	}
	
}
