#include<iostream>
using namespace std;
int main()
{
	string s="iam chabeer absal";
	int h=0,l=s.length()-1;
	while(h<=l)
	{
		swap(s[h],s[l]);
		h++;
		l--;
	}
	cout<<s;
	return 0;
}
