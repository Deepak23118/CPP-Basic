#include<iostream>
#include<cstring>
using namespace std;
void consecutiveDuplicates(char a[],char x[])
{
	int len=strlen(a);
	x[0]=a[0];
	int j=1;
	for(int i=1;i<len;i++)
	{
		if(a[i-1]==a[i])
			continue;
		x[j]=a[i];
		j++;
	}
	x[j]='\0';
}
int main()
{
	char ch[1000];
	cin.getline(ch,1000);
	char x[strlen(ch)];
	consecutiveDuplicates(ch,x);
	cout<<"Original is "<<ch<<endl<<"Modified is "<<x<<endl;
	return 0;
}