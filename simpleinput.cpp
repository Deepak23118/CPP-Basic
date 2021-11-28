#include<iostream>
using namespace std;
int main()
{
	int n,ans=0;
	cin>>n;
	ans=ans+n;
	while(ans>=0)
	{
		cout<<n<<endl;
		cin>>n;
		ans=ans+n;
	}
	return 0;
}