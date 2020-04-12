#include<iostream>
using namespace std;

struct bst//bst==Binary Search tree Node
{
int data;
bst* left;
bst* right;
};

bst* GetNewNode(int data)
{
bst* newNode=new bst();//bst* newNode=(bst*)malloc(sizeof(bst)); we can use any of type
newNode->data=data;
newNode->left=newNode->right=NULL;
return newNode;
}
bst* Insert(bst * root,int data)
{
if(root==NULL)
{
root=GetNewNode(data);
}
else if (data<=root->data)
{
root->left=Insert(root->left,data);
}
else  
{
root->right=Insert(root->right,data);
}
return root;
}

bool search (bst* root,int data)
{
if(root==NULL) 
return false;
else if(root->data==data)
return true;
else if(data<=root->data) 
return search(root->left,data);
else return search(root->right,data);
}
//return true;
//}

int main()
{
bst* root=NULL;//create an empty tree
root=Insert(root,15);
root=Insert(root,10);
root=Insert(root,20);
root=Insert(root,13);
root=Insert(root,87);
root=Insert(root,28);
root=Insert(root,100);
root=Insert(root,18);
root=Insert(root,14);
root=Insert(root,2);
int number;
cout<<"Enter number to be searched \n";
cin>>number;
if(search(root,number)==true)
cout<<"Found \n";
else
cout<<"Not Found";
return 0;
}
