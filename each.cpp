#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int a;
	for(int i=0;i<5;i++)
	{
    cin>>a; 
	v.push_back(a);
}
	cout<<v.size();
	reverse(v.begin(),v.end());
	for(int i=0;i<5;i++)
	cout<<v[i]<<" ";
	cout<<endl;
	cout<<v.front();
	cout<<v.back();
	      
	      
    return 0;
	
	
}
