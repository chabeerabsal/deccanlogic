#include<iostream>
using namespace std;
void merge(int a[],int b[],int m,int n){
	int i=0,j=0;
	while(i<m&&j<m)
	{
		if(a[i]<=b[i])
		{
			cout<<a[i]<<" ";
			i++;
		}
		else{
			cout<<b[i];
			j++;
		}
		
	}
	while(i<m){
		cout<<a[i];
		i++;
	}
	while(j<n){
		cout<<b[j];
		j++;
	}
}
int main()
{
	int a[]={1,20,40,50};
	int b[]={20,40,50,60};
	merge(a,b,4,4);
	return 0;
	
}
