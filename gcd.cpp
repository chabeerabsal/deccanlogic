//find gcd of 2,4
#include<iostream>
using namespace std;
int main()                                  //4 
{ 
    int a,b;
	cin>>a>>b;
	int res=min(a,b);
	while(res>0)
	{
		if(a%res==0&&b%res==0)
		{
			cout<<res;
			break;
		}
		res--;
	}
	return 0;
}
