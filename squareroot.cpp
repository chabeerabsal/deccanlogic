#include<iostream>
using namespace std;
float squareroot(int x)
{
	int low=0,high=x;
	float ans;
	bool flag=false;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(mid*mid==x)
		{
			ans=mid;
			flag=true;
			break;
		}
		else if(mid*mid>x)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
			ans=mid;
		}
		
	}
	if(flag==true)
	return ans;
	float increment=0.1;
	for(int i=0;i<3;i++)
	{
		while(ans*ans<=x)
		ans+=increment;
		ans=ans-increment;
		increment=increment/10;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"Enter the number";
	cin>>n;
	cout<<squareroot(n);
	return 0;
}
