#include<iostream>
using namespace std;
int main()
{
	int low,high;
	int arr[]={1,2,4,4};
	int n=4;
	low=0,high=n-1;
	int mid;
	int x=4;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]>x)
		{
			high=mid-1;
		}
		else if(arr[mid]<x){
			low=mid+1;
		}
	
