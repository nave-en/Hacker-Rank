#include<iostream>
using namespace std;
void display(int arr[],int n,int x)
{
int u=0;
multimap<int,int> m;
for(int i=0;i<n;i++)
{
m.insertpair(abs(x-arr[i]),arr[i]);
}
int main()
{
int arr[10];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int v;
cout<<"ent v value"<<endl;
cin>>v;
display(arr,n,v)
return 0;
}
