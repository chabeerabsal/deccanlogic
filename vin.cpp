#include<iostream>
#include<vector>
using namespace std;
int  main()
{
	vector<int> s;
	int a;
	for(int i=0;i<5;i++)
	cin>>a;
	s.push_back(a);
	for(int i=0;i<5;i++)
	cout<<s[i]<<" ";
}
