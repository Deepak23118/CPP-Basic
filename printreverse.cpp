#include<iostream>
using namespace std;
int main()
{
	int n,rev=0;
	cin>>n;
	while(n>0)
	{
		int temp=n%10;
		rev=temp+rev*10;
		n/=10;
	}
	cout<<rev;
}