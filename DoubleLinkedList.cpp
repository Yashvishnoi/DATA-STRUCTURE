#include<iostream>
using namespace std;

struct Node {
int data;
Node* prev;
Node* next;
};
Node* head;
void GetNewNode()
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

int main()
{
InsertAtHead(2);
print();
InsertAtHead(4);
print();
InsertAtHead(6);
print();
return 0;
}
