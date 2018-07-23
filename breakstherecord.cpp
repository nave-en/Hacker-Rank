#include<iostream>
using namespace std;
int main()
{
int arr[1000];
int n,countmax=0,countmin=0,max=0,min=0;
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
max=arr[0];
min=arr[0];
for(int i=0;i<n;i++)
{
if(max<arr[i])
{
countmax=countmax+1;
max=arr[i];
}
if(min>arr[i])
{
countmin=countmin+1;
min=arr[i];
}
}
cout<<countmax<<" "<<countmin<<endl;
return 0;
}
