#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		int x;
		cin>>x;
		int sum=x%10;
		x=x/10;
		int p=2;
		while(x>0)
		{
			int t=x%10;
			sum=sum+t*p;
			p=p*2;
			x=x/10;
		}
		cout<<sum<<endl;
		n--;
	}
	return 0;
}