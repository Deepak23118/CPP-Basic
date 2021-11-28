#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i=0;
	cin>>n1>>n2;
	while(n1>0)
	{	
		i++;
		if((((3*i)+2)%n2)!=0)
		{
			cout<<((3*i)+2)<<endl;
			n1--;
		}
		else
			continue;
	}
	return 0;
}