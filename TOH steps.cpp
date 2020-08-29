#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void toh(int s,int d,int h,int n,int &c)
{
	c++;
	if(n==1)
	{
		cout<<"Moving disk from "<<s<<" to "<<d<<endl;
		return;
	}
	toh(s,h,d,n-1,c);
	cout<<"Moving disk from "<<s<<" to "<<d<<endl;
	toh(h,d,s,n-1,c);
}
int main()
{
	int n;
	cout<<"Enter the number of disks :";
	cin>>n;
	//shifting elements from source stack to destination stack using Tower of hanoi approach
	int s=1,d=3,h=2; // source,destination,helper
	int c = 0;
	toh(s,d,h,n,c);
	cout<<c;
}
