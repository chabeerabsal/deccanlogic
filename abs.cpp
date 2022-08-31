#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i;
	int sum;
	int arr[6]={1,-2,4,-6,9,-9};
	for(i=0;i<6;i++){
		if(i==5)
	sum=abs(arr[i]-arr[i-5]);
	}
	cout<<sum;
}
