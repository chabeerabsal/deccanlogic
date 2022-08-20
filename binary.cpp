#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5;
	//binary serachh
	int low,high,mid;
	low=0,high=n-1;
	int x=6;
	while(low<=high)
	{
	mid=(low+high)/2;
	
	if(x==arr[mid])
	{
		 cout<<mid;
		 break;
		}	
		else if(x>arr[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	cout<<"-1";
	return 0;
}
