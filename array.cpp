#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int arr[100],n;
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
int j=0;
int k=n-1;
int mid;
while(j<k)
{
cout<<arr[j];
cout<<arr[k];
j++;
k--;
}
if((mid=n%2)!=0)
cout<<arr[n/2];
return 0;
}

