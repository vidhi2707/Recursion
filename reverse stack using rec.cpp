#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s , int temp)
{
	if(s.size()==0)
	{
		s.push(temp);
		return;
}
	int k= s.top();
	s.pop();
	insert(s,temp);
	s.push(k);
	
}
void reverse(stack<int> &s)
{
	if(s.size() == 1)
	return;
	int temp = s.top(); 
	s.pop();
	reverse(s);
    insert(s,temp);
    return;
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
	
	reverse(s);
	cout<<"Printing elements of stack after reversing : ";
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
