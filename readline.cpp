#include<iostream>
using namespace std;
void readline(char a[],int maxSize,char delimeter)
{
	int i=0;
	char ch=cin.get();
	while(ch!=delimeter)
	{
		a[i]=ch;
		i++;
		if(i==(maxSize-1))
			break;
		ch=cin.get();
	}
	a[i]='\0';
	return;
}
int main()
{
	char a[1000];
	/*cin>>a;
			using this we can only take a word as 
			input as cin will stop at \n and space.
			So if input is hello world then we get output as hello.
			For this to solve we use cin.get().It takes 1word at a time as input.
			char ch = cin.get(); is a way to use cin.get()*/
	//readline(a,1000,'$');
	cin.getline(a,1000,'$');//Hear cin.getline(a,1000,'$'); work exactly as our readline fuction.
	cout<<a;
	return 0;
}