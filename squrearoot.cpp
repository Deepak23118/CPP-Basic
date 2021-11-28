#include<iostream>
using namespace std;
int main()
{
	int n,p;
	cin>>n>>p;
	float ans,inc;
	ans=0;
	inc=1.0;
	for(int i=0;i<=p;i++)
	{
		while(ans*ans<=n)
		{
			ans=ans+inc;
		}
		ans=ans-inc;
		inc=inc/10;
	}
	cout<<ans;
	return 0;
}