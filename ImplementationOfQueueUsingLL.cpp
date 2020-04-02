#include<iostream>
using namespace std;

struct Node
{
 int data;
 Node* next;
};

Node* front=NULL; 
Node* rear=NULL;

void inqueue(int x)
{
 Node* temp=new Node;
 temp->data=x;
 temp->next=NULL;
 if(front==NULL&rear==NULL)
 {
  front=rear=temp;
  return;
 }	
 else
 {
  rear->next=temp;
  rear=temp;
 }
}


void dequeue()
{
 Node* temp=new Node;
 if(front==NULL)
 {
  cout<<"Underflow condition \n";
  return;
 }
 if(front==rear)
 {
  front=rear=NULL;
 }
 else
 front=front->next; 
 delete (temp);
}

void print()
{
	Node* temp=front;
	cout<<"QUEUE \n";
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<"\n";
}
int main()
{
 inqueue(2);
 print();
 inqueue(4);
 print();
 inqueue(8);
 print();
 inqueue(10);
 print();
 dequeue();
 print();
return 0;
}
