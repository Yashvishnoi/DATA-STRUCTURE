#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
	Node* head;

void Insert(int x)
{
	Node* temp=new Node;
	temp->data=x;
	temp->next=head;
	head=temp;
}


void Delete(int n)
{
	Node* temp=head;
	Node* prev,*temp1;
	int count=1;

	if(n==1)
	{
		head=temp->next;
		delete (temp);	
		return;	
	}
	else
	{
	 while(temp!=NULL)
	 {
	  if(count==n)
	   {
        temp1=prev->next;
		prev->next=temp1->next;
		delete (temp1);
	   }
	   prev=temp;
	   temp=temp->next;
	   count++; 	
	  }
	 }
	
}

void Print()
{
	
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<" "<< temp->data;
		temp=temp->next;
	}
	cout<<" ";
}



int main()
{
	head=NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	int n;
	cout<<"\n"<<"Enter the node number to be deleted "<<"\n";
	cin>>n;
	Delete(n);
	Print();
return 0;
}

    


