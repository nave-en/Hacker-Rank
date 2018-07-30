#include<iostream>
using namespace std;
int arr[100];
int top=-1;
void push(int a)
{
top=top+1;
arr[top]=a;
}
void pop()
{
int temp=arr[top];
cout<<"the element delete is"<<temp<<endl;
top=top-1;
}
void display()
{
cout<<"the element in the stack are:"<<endl;
for(int i=0;i<=top;i++)
{
cout<<arr[i]<<endl;
}
}
int main()
{
int n,b,i=0;
cin>>n;
while(i<n)
{
cin>>b;
push(b);
i++;
}
pop();
display();
return 0;
}
