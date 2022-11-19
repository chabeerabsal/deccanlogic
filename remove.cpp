#include<iostream>
using namespace std;
string remove(string s, string part) {
    int i=0; 
    int len = s.length(); 
    string finalRes = s; 
    while(i < len) { 
    string s= finalRes; 
    if(s.find(part) < s.length()) 
    { 
    int occInd = s.find(part); 
     finalRes.erase(occInd, part.length()); 
    } 
    i++; 
    } 
   return finalRes;
   }
 int main()
 {
 	string s1="It is a long established fact that a reader will be distracted by the readable content of a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal distribution of letters, as opposed to using 'Content here, content here', making it look like readable English. Many desktop publishing packages and web page editors now use Lorem Ipsum as their default model text, and a search for 'lorem ipsum' will uncover many web sites still in their infancy. Various versions have evolved over the years, sometimes by accident, sometimes on purpose (injected humour and the like).";
	 string s2="is";
 	cout<<remove(s1,s2);
 	return 0;
   }  

