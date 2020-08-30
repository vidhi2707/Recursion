#include<iostream>
#include<vector>
#include<ctype.h>
#include<stdio.h>
using namespace std;//n people are standing in a circle and starting from 0 index, every kth person is killed. one servives in end.find that person
int a;
void bal(vector<int> v,int k,int index)
{
	if(v.size()==1)
	{
		a = v[0];
		return;
	}
	index = ((index+k)%v.size());
	v.erase(v.begin()+index);
	bal(v,k,index);
}
	
int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	vector<int> v;
	for(int i=1;i<=n;i++)
	{
		v.push_back(i);
	}
	int k;
	cout<<"Enter k : ";
	cin>>k;
	k = k-1;
	int index = 0;
	bal(v,k,index);
	cout<<a;	
	
return 0;
}
