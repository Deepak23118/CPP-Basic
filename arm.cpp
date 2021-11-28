#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,temp,len=0,no=0;
	cin>>n;
	temp=n;
	while(temp>0)
	{
		len++;
		temp/=10;
	}
	temp=n;
	while(temp>0)
	{
		int t1;
		t1=temp%10;
		no=no+pow(t1,len);
		temp/=10;
	}
	if(no==n)
		cout<<"IS ARMSTRONG";
	else
		cout<<"NOT ARMSTRONG";
	return 0;
}