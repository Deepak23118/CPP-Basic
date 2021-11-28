//MAXIMUM SUM SUBARRAY USING KadanesAlgo
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],cur=0,maxs=0,left=0,right=0,start=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cur=cur+arr[i];
		if(cur<0)
		{
			cur=0;
			start=i+1; //Hear we record starting index of new list.New List because cur=0
		}
		//maxs=max(maxs,cur);
		if(maxs<cur)
		{
			maxs=cur;
			left=start;//As cur>max so the list starting point is in start.So left=start
			right=i;//As cur>max so the list ending  point is in i.So right=i
		}
	}
	cout<<"Maximum sum is "<<maxs<<endl;
	cout<<"Array is ";
	for (int i = l; i <= r; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}