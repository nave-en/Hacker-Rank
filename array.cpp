#include<iostream>
#include<algorithm>
using namespace std;
void asort(int arr[],int n);
int main()
{
int arr[10];
int n;
cout<<"ent n values"<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
asort(arr,n);
return 0;
}
void asort(int arr[],int n)
{
sort(arr,arr+n);
int  i=0;
int  j= n-1;
 while(i<j)
{
cout<<arr[j]<<endl;
cout<<arr[i]<<endl;
i=i+1;
j=j-1;
}
if(n%2 !=0)
cout<<arr[n/2]<<endl;
}

