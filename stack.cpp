#include<iostream>
using namespace std;
struct s{
	int *a;
	int cap;
	int top;
	s(int c){
		cap=c;
		a=new int [cap];
		top=-1;
	}
	void push(int x){
		if(top==cap-1){
			cout<<"stack is full";
		}
		top++;
		a[top]=x;
	}
	int pop(){
		if(top==-1){
			return -1;
		}
		int temp=a[top];
		top--;
		return temp;
	}
	int peek(){
		if(top==-1)
		return -1;
		return a[top];
	}
	bool isempty(){
		return top==-1;
	}
};
int main(){
	s a(5);
	a.push(8);
	a.push(9);
	cout<<a.pop();
	cout<<a.peek()<<endl;
	cout<<a.pop()<<endl;
	cout<<a.pop()<<endl;
	cout<<a.isempty();
	return 0;
}
