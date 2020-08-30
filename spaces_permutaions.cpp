#include<iostream>
using namespace std;
void solve(string ip,string op) // add spaces in all permutations between the letters of the string
{
	if(ip.length()==0)
	{
		cout<<op<<endl;
		return;
	}
	string op1 = op;
	string op2 = op;
	op1.push_back(ip[0]);
	op2.push_back(' ');
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	solve(ip,op1);
	solve(ip,op2);
	
}
int main()
{
	string ip;
	cout<<"Enter string";
	cin>>ip;
	string op = "";
	op.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	solve(ip,op);//empty string is being printed in the beginning though not visible.
	return 0;
}
