#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v;
	int a;
	for(int i=0;i<5;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<5;i++)
	cout<<v[i]<<" ";
	
}
