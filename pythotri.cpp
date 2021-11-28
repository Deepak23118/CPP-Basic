#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,temp1,temp2,temp3,c=0;
	cin>>n;
	temp1=pow(n,2);
	for(temp3=n+1;temp3<=temp1;temp3++)
	{
		for(temp2=1;temp2<=n;temp2++)
		{
			if(pow(temp3,2)-pow(temp2,2)==temp1)
			{
				cout<<temp2<<" "<<temp3<<endl;
				c=1;
				break;
			}
		}
		if(c==1)
			break;
	}
	if(temp3==temp1)
		cout<<"-1";
	return 0;
}