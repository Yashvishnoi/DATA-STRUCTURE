#include<iostream>
#define Max 50

using namespace std;


int A[Max];
int top=-1;

void push(int x)
 {
	
	if(top== Max-1)
		cout<<"OVERFLOW CONDITION \n ";
	
	top=top+1;
	A[top]=x;

 }

void pop()
 {
	if(top==-1)
	cout<<"UNDER FLOW CONDITION \n ";
	top=top-1;

 } 

int Top()
{
return A[top];
}
  
void print()
{
	int i;
	cout<<"Stack:  ";
	for(int i=0;i<=top;i++)
		cout<<A[i];
	cout<<"\n";
}


int main()
{
Top();
push(2);
print();
push(4);
print();
push(6);
print();
push(8);
print();
return 0;
}
