#include<iostream>
using namespace std;
int main()
{
int n,sum=1;
cin>>n;
while(sum<=n)
{
sum=sum*2;
if(n==1)
{
cout<<"the not power"<<endl;
break;
}
if(sum==n)
{
cout<<"power of 2"<<endl;
break;
}
}
return 0;
}
