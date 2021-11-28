//MAXIMUM SUM SUBARRAY USING CUMULATIVE SUM
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],cumarr[n]={0};
	cin>>arr[0];
	cumarr[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		cin>>arr[i];
		cumarr[i]=arr[i]+cumarr[i-1];
	}
	int cursum=0,maxsum=0,left=-1,right=-1;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			cursum=cumarr[j]-cumarr[i-1];
			if(maxsum<=cursum)
			{
				left=i;
				right=j;
				maxsum=cursum;
			}
		}
	}
	cout<<"MAX SUM is "<<maxsum<<endl;
	for(int i=left;i<=right;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}