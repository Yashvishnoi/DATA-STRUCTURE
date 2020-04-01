#include<iostream>
using namespace std;

#define n 10
class queue
{
int A[n];
int front,rear;
public:
queue()
{
front=-1;
rear=-1;
}

bool Isempty()
{
return (rear==-1&&front==-1);
}

bool Isfull()
{
return (rear+1)%n==front?true:false;
}
void Inqueue(int x)
{
 if((rear+1)%n==front)
 {
  cout<<"Full \n";
  return ;
 }
 else if(Isempty())
 {
  front=rear=0;
  A[rear]=x; 
 }
 else
 {
  rear=((rear+1)%n);
  A[rear]=x;
 }
}

void Dequeue()
{
 if (Isempty())
{
 cout<<"Error    \n";
 return;
}
 else if (front==rear)
 front=rear=-1;
 else 
 front=(front+1)%n;
}

void print()
{
 int i;
 int count= (rear+n-front)%n+1;
 cout<<" QUEUE  : ";
 for(i=0;i<count;i++)
 {
  int index=(front+i)%n;
  cout<<A[index]<<" "; 
 }
 cout<<"\n";
}
};




int main()
{
 queue q;
 
 q.Inqueue(2);
 q.print();
 q.Inqueue(4);
 q.print();
 q.Inqueue(6);
 q.print();
 q.Dequeue();
 q.print();
 return 0;
}
