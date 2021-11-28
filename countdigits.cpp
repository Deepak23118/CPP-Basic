#include<iostream>
using namespace std;
int main()
{
	int n,c,count=0,t;
	cin>>n>>c;
	while(n>0)
	{
		t=n%10;
		if(t==c)
			count++;
		n/=10;
	}
	cout<<count<<endl;
	return 0;
}