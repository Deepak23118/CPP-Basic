#include<iostream>
#include<cstring>
using namespace std;
bool isPlaindrome(char a[])
{
	int l=0,r=strlen(a)-1,c=0;
	while(l<=r)
	{
		if(a[l]!=a[r])
		{
			c=1;
			return false;
		}
		l++;
		r--;
	}
	if(l>r)
		return true;
}
int main()
{
	char ch[1000];
	cin.getline(ch,1000);
	if(isPlaindrome(ch))
		cout<<"IS Plaindrome"<<endl;
	else
		cout<<"NOT Plaindrome"<<endl;
	return 0;
}