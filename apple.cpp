#include<iostream>
using namespace std;
int main()
{
int s,t,a,b,m,n;
cin>>s>>t>>a>>b;
int app[100],ora[100];
cin>>m>>n;
int counta=0,counto=0;
for(int i=0;i<m;i++)
{
cin>>app[i];
app[i]=app[i]+a;
cout<<app[i];
}
for(int j=0;j<n;j++)
{
cin>>ora[j];
ora[j]=ora[j]+b;
cout<<ora[j];
}
for(int i=0;i<m;i++)
{
if((app[i]>=s)&&(app[i]<=t))
counta=counta+1;
}
for(int j=0;j<n;j++)
{
if((ora[j]<=t)&&(ora[j]>=s))
counto=counto+1;
}
cout<<counta<<counto<<endl;
return 0;
}
