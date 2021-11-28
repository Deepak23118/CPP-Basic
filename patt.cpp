#include<iostream>
using namespace std;
void patt(int n)
{
	for(int i=n;i>0;i--)
	{
		char ch='A';
		int temp=i;
		while(temp>0)
		{
			cout<<ch;
			ch++;
			temp--;
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	patt(n);
	return 0;
}