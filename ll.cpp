#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	
	
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};
int main()
{
	Node *head;
	Node *tmp;
	Node *tmp1;
	head=new Node(10);
	tmp=new Node(20);
    tmp1=new Node(30);
     head->next=tmp;
     tmp->next=tmp1;
     cout<<head->data<<" "<<tmp->data<<" "<<tmp1->data;
	return 0;
}
