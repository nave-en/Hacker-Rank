#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node
{
int data;
struct node* right;
struct node* left;
}*root=NULL;
void insert(node* root,int value);
void display(node* ptr,int level);
int main()
{
int i,j=1,value;
while(j>0)
{
cout<<"1.Insert\n2.display\n3.exit"<<endl;
cin>>i;
switch(i)
{
case 1:
cout<<"enter value"<<endl;
cin>>value;
   insert(root,value);
break;
case 2:
 display(root,1);
break;
case 3:
exit(0);
j=j-1;
break;
default:
cout<<"enter correct choice"<<endl;
}
}
return 0;
}
void insert(node* root,int value)
{
if(root==NULL)
{
root =new node;
root->data=value;
root->left=NULL;
root->right=NULL;
cout<<"root has beeen successfully inserted"<<endl;
}
else if(value == root->data)
{
cout<<"the element is already in the tree"<<endl;
}
if(value>(root->data))
    {
        root->right = insert((root->right),value);
    }
    else if(value < (root->data))
    {
        root->left = insert((root->left),value);
    }
}
void display(node* ptr,int level)
{
    int i;
    if (ptr != NULL)
    {
        display(ptr->right, level+1);
        cout<<endl;
        if (ptr == root)
            cout<<"Root->:  ";
        else
        {
            for (i = 0;i < level;i++)
                cout<<"       ";
	}
        cout<<ptr->data;
        display(ptr->left, level+1);
    }
}

