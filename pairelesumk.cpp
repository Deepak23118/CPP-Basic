//Given a Sorted Array , Find Pair of Elements that Sum to K(Given) .Its O(n) time approach and its called 2 pointer approach
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int key;
	cout<<"Enter Key"<<endl;
	cin>>key;
	int l=0,r=n-1,temp;
	while(l!=r)
	{
		temp=arr[l]+arr[r];
		if(temp<key)
			l++;
		else if(temp>key)
			r--;
		else if(temp==key)
		{
			cout<<"Pair is "<<arr[l]<<" "<<arr[r]<<endl;
			l++;
			r--;
		}
	}
	return 0;
}