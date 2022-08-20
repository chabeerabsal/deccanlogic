#include<iostream>
using namespace std;
int eucledian(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return eucledian(b,a%b);
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<a*b/eucledian(a,b);
	return 0;
}
