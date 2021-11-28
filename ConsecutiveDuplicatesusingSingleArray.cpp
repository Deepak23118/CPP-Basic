#include<iostream>
#include<cstring>
using namespace std;
void consecutiveDuplicates(char a[])
{
	int len=strlen(a),curr=1;
	for(int i=1;i<len;i++)
	{
		if(a[i]==a[i-1])
			continue;
		else
		{
			a[curr]=a[i];
			curr++;
		}
	}
	a[curr]='\0';
}
int main()
{
	char ch[1000];
	cin.getline(ch,1000);
	cout<<"Original is "<<ch<<endl;
	consecutiveDuplicates(ch);
	cout<<"Modified is "<<ch<<endl;
	return 0;
}