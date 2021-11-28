#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,r1,r2;
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c);
	d=sqrt(d);
	r1=((-b)+d)/(2*a);
	r2=((-b)-d)/(2*a);
	if(r1>=0 and r2>=0  and r1==r2)
		cout<<"Real and Equal"<<endl;
	else if(r1>=0 and r2>=0  and r1!=r2)
		cout<<"Real and Distinct"<<endl;
	else if(r1<0 or r2<0)
	{
		cout<<"Imaginary"<<endl;
		return 0;
	}
	r1>=r2?cout<<r2<<endl<<r1:cout<<r1<<endl<<r2;
	return 0;
}