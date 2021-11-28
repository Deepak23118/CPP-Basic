#include<iostream>
using namespace std;
int main()
{
	char ch;
	int a,b;
	while(true)
	{
		cin>>ch;
		if(ch=='X' or ch=='x')
			break;
		cin>>a>>b;
		switch(ch)
		{
			case '+':
					cout<<a+b;
					break;
			case '-':
					cout<<a-b;
					break;
			case '*':
					cout<<a*b;
					break;
			case '/':
					cout<<a/b;
					break;
			case '%':
					cout<<a%b;
					break;
			default:
					cout<<"Invalid operation. Try again.";
		}
	}
	return 0;
}