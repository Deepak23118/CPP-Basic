#include<iostream>
using namespace std;

int bin_Sea(int *arr,int n,int key)
{
	int l=0,r=n-1;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(arr[mid]==key)
			return mid;
		if(arr[mid]<key)
		{
			l=mid+1;
		}
		if(arr[mid]>key)
		{
			r=mid-1;
		}
	}
	if(l>r)
		return -1;
}

int main()
{
	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Enter Key to Search"<<endl;
	cin>>key;
	if(bin_Sea(arr,n,key)!=-1)
		cout<<key<<" is Present at index "<<bin_Sea(arr,n,key)+1<<endl;
	else
		cout<<key<<" is not Present in array "<<endl;
	return 0;
}