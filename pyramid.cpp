#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int temp=n-i;
		while(temp>0)
		{
			cout<<" ";
			temp--;
		}
		int x=i,y=i-1;
		while(x>0)
		{
			y++;
			cout<<y;
			x--;
		}
		x=i-1;
		while(x>0)
		{
			y--;
			cout<<y;
			x--;
		}
		cout<<endl;
	}
	return 0;
}

/*
    1
   232
  34543
 4567654
567898765
*/