#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int temp,sum=0;
		cin>>temp;
		while(temp>0)
		{
			sum=sum+(temp%10);
			temp/=10;
		}
		if(sum%2==0 and sum%4==0)
			cout<<"YES"<<endl;
		if(sum%2!=0 and sum%3==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}