#include <iostream>
using namespace std;
void print(int n)
	{
	    if(n==1)
	        cout<<1<<" ";
	   else{
	    print(n-1);
	    cout<<n<<" ";
	   }
	}
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{   int n;
	    cin>>n;
	    print(n);
	    cout<<endl;
	}
	
	return 0;
}
