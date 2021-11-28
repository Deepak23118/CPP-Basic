#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int lar=INT_MIN,sma=INT_MAX,n,key;
	cin>>n;
	int arr[n];
	cin>>key;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		if(lar<=arr[i])
			lar=arr[i];
		if(sma>=arr[i])
			sma=arr[i];
	}
	cout<<"Largest is "<<lar<<endl<<"Smallest is "<<sma;
	return 0;
}