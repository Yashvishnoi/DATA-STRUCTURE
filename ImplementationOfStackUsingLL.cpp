#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* top=NULL;

void push (int x)
{
	Node* temp=new Node;
	temp->data=x;	
	temp->next=top;
	top=temp;
}

void pop()
{
	Node* temp;
	if(top==NULL)
	return;
	temp=top;
	top=top->next;
	delete (temp);
}

void print()
{
	Node* temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
}

int main()
{
	push(2);
	print();
	push(4);
	print();
	push(5);
	print();
	pop();
	print();
return 0;
}
