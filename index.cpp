#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>res;
    int n;
    cin>>n;
    char *s[n];
    while(n>0){
    string str1;
    getline(cin,str1);
    s+=str1;
    n--;}
    string search;
    getline(cin,search);
    for(int i=0;i<n;i++)
    {
        if(s[i].indexOf(search)==0||s[i].indexOf(search)==' '+1)
        res.push_back(s[i]);
        }
    }
    for(auto x:res)
    cout<<x<<endl;
    return 0;

    
}
