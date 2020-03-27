#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
//	Node* A;	
	Node* head;
	void Insert(int x)
{
	Node* Newnode=new Node;
	Newnode->data=x;
	Newnode->next=NULL;
	if(head==NULL)
	{
		head=Newnode;
	}
	else
	{
		//Node*temp=head;
		while(head->next!=NULL)
		head=head->next;
		head->next=Newnode;
	}
	
	
}
//Node* A;	
void Print()
{

	Node* temp= head;
	while(temp!=NULL)
	{
	
		cout<<" "<<temp->data;
		temp=temp->next;
	}
	
}



int main()
{
	head=NULL;
	int n,x,i;
	cout<<"Enter the value how much node you want to enter"<<"\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<" Enter the number to be entered ";
		cin>>x;
		Insert(x);
		//Print();
	}
Print();
return 0;
}
