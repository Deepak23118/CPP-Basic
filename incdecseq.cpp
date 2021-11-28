#include<iostream>
using namespace std;
int main()
{
	int n,c=0;
	int temp1,temp2,temp3;
		cin>>n;
		cin>>temp1>>temp2>>temp3;
		if(temp1==temp2 or temp2==temp3)
		{
			cout<<"NO"<<endl;
			c=1;
		}
		else
		{
			for(int i=4;i<=n;i++)
			{
				temp1=temp2;
				temp2=temp3;
				cin>>temp3;
				if(temp1==temp2 or temp2==temp3)
					{
						cout<<"NO"<<endl;
						c=1;
						break;
					}
		}
	}
	if(c==0)
		cout<<"YES"<<endl;
	return 0;
}