#include<iostream>
using namespace std;
int main()
{
int x1,v1,x2,v2,d1,d2,count=0;
cin>>x1>>v1>>x2>>v2;
d1=x1+v1;
d2=x2+v2;
for(int i=0;i<100;i++)
{
if(d1==d2)
count=count+1;
d1=d1+v1;
d2=d2+v2;
}
if(count==0)
cout<<"No"<<endl;
else
cout<<"Yes"<<endl;
return 0;
}
