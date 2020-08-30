#include<iostream>
#include<vector>
#include<ctype.h>
#include<stdio.h>
using namespace std;//generating all permutations of balanced paranthesis with given n opening and n closing paranthesis
vector<string> s;
void bal(int o,int c,string op)
{
	if(o==0 && c==0)
	{
		s.push_back(op);
		return;
	}
	if(o<c)
	{
		if(o>0)
		{
		string op1 = op;
		op1.push_back('(');
		bal(o-1,c,op1); 
	}
		if(c>0){
		string op2 = op;
		op2.push_back(')');
		bal(o,c-1,op2);
	}
	}
	else
	{
		string op1 = op;
		op1.push_back('(');
		bal(o-1,c,op1);

	}
}
int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int o = n;
	int c = n;
	string op = "";
	bal(o,c,op);
	vector<string>::iterator i;
	for(i=s.begin();i!=s.end();i++)
	{
		cout<<*i<<" ";
	}	
	
return 0;
}
