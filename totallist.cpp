#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node
{
int data;
struct node * next;
}*head,*tail;
void insert_begin(int q);
void display();
void insert_end(int q);
void insert_position(int value,int p);
void delete_start();
void delete_end();
void delete_position(int p);
void sort();
void reverse();
void rdisplay(node* temp1);
int main()
{
int i,value,p,j=1;
while(j>0)
{
cout<<"\n1.insert at begin \n 2.insert at position \n 3.insert at end   \n 4.delete at start \n 5.delete at end \n 6.delete at position \n 7.display\n8.sort\n9.reverse\n10.exit"<<endl;
cin>>i;
switch(i)
{
case 1:
cout<<"enter value"<<endl;
cin>>value;
insert_begin(value);
break;
case 2:
cout<<"enter value"<<endl;
cin>>value;
cout<<"enter position"<<endl;
cin>>p;
insert_position(value,p);
break;
case 3:
cout<<"enter the value"<<endl;
cin>>value;
insert_end(value);
break;
case 4:
delete_start();
break;
case 5:
delete_end();
break;
case 6:
cout<<"enter the position"<<endl;
cin>>p;
delete_position(p);
break;
case 7:
display();
break;
case 8:
sort();
break;
case 9:
reverse();
break;
case 10:
j=0;
exit(0);
break;
default:
cout<<"enter correct value"<<endl;
}
}
return 0;
}
void insert_begin(int q)
{
struct node* temp;
temp=new node;
temp->data=q;
temp->next=head;
head=temp;
}
void insert_position(int value,int p)
{
int d=0;
node* newnode=new node;
node* temp;
temp=head;
newnode->data=value;
temp=head;
if(p=1)
{
insert_begin(value);
}
while(temp!=NULL)
{
if(d==p)
{
cout<<"hello";
newnode->next=temp->next;
temp->next=newnode;
}
d++;
temp=temp->next;
}
}
void insert_end(int q)
{
 node* temp=new node;
 node* temp1;
temp1=head;
temp->data=q;
temp->next=NULL;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1->next=temp;
}
void delete_start()
{
node* temp;
temp =new node;
if(head==NULL)
cout<<"list is empty"<<endl;
else
{
temp=head;
head=head->next;
free(temp);
}
}
void delete_end()
{
node* temp;
temp= new node;
temp=head;
while(temp->next&&temp->next->next!=NULL)
{
temp=temp->next;
}
if(temp==head)
{
free(temp);
return ;
}
free(temp->next);
temp->next=NULL;
}
void delete_position(int p)
{
node * temp;
node * temp1;
int k=0;
temp =new node;
temp1 =new node;
temp=head;
while(temp!=NULL&k<p-1)
{
temp=temp->next;
k=k+1;
}
temp1=temp->next->next;
free(temp->next);
temp->next=temp1;
}
void display()
{
node* temp= new node;
temp=head;
while(temp!=NULL)
{
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}
void sort()
{
int value;
node* temp;
node* temp1;
temp = new node;
temp1 =new node;
temp =head;
while(temp!=NULL)
{
temp1=temp->next;
while(temp1!=NULL)
{
if(temp->data > temp1->data)
{
value=temp->data;
temp->data=temp1->data;
temp1->data=value;
}
temp1=temp1->next;
}
temp=temp->next;
}
}
void reverse()
{
node* temp;
temp =new node;
temp=head;
rdisplay(temp);
}
void rdisplay(node* temp1)
{
if(temp1==NULL)
return ;
rdisplay(temp1->next);
cout<<temp1->data<<"->";
}
