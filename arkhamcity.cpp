#include<iostream>
using namespace std;
int FindNumOfStepsRequired(int a,int b)
{
	return a*b;
}
int main()
{
	int patient;
	int steps;
	cout<<"enter patient and steps";
	cin>>patient>>steps;
	int answer=FindNumOfStepsRequired(patient,steps);
	cout<<answer;
	return 0;
}
