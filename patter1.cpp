
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			int temp=i;
			while(temp>0)
			{
				if(temp%2==0)
					cout<<"0";
				else
					cout<<"1";
				temp--;
			}
		}
		else
		{
			int temp=i;
			while(temp>0)
			{
				if(temp%2==0)
					cout<<"0";
				else
					cout<<"1";
				temp--;
			}
		}
		cout<<endl;
	}
	return 0;
}