#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* prev;
	Node* next;
};
Node* head;

Node* GetNewNode(int x)
{

	Node* mynode= new Node;
	mynode->data=x;
	mynode->prev=NULL;
	mynode->next=NULL;

return mynode;
}

void InsertAtHead(int x)
{
	Node* newnode=GetNewNode(x);
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	head->prev=newnode;
	newnode->next=head;
	head=newnode;
}

void print()
{
	Node* temp=head;
	cout<<"Forward :";
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
}

void reversePrint()
{
	Node* temp=head;
	if(temp==NULL)
	return;
	  //Going to last
	while(temp->next!=NULL)
		temp=temp->next;
	//Traversing backward using prev pointer
	cout<<"Reverse : ";
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->prev;
	}	
	cout<<"\n";
}

int main()
{
	InsertAtHead(2);
	print();
	reversePrint();
	InsertAtHead(4);
	print();
	reversePrint();
	InsertAtHead(6);
	print();
	reversePrint();
return 0;
}
