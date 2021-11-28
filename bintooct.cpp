#include<iostream>
using namespace std;
int main()
{
	int n,oct=0,temp;
	cin>>n;
	temp=n;
	while(n!=0)
	{
		temp=n/8;
		int t1=temp*8;
		int t2=n-t1;
		oct=t2+oct*10;
		n=temp;
	}
	cout<<oct;
	return 0;
}