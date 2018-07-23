#include<iostream>
using namespace std;
int arr[100];
int main()
{
int n,flag=-1,index=0,x,find=1;
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<"enter the elements to find x"<<endl;
cin>>x;
//cout<<flag;
for(int i=0;i<n;i++)
{
if(find)
{
if(arr[i]==x)
{
flag=flag+1;
find=0;
index=i;
}
else
{
if(a[i]!=x)
break;
}
int last=0;
//cout<<index;
last=index-flag;
if(index==0)
cout<<"element not found"<<endl;
else if(flag==0)
{
cout<<"the index is:"<<last;
}
else
{
cout<<"the first occurence is"<<last<<"last occurence"<<index<<endl;
}
return 0;
}
