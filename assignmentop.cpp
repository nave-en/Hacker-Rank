#include<iostream>
using namespace std;
class sample
{
public:
int a;
void get()
{
cin>>a;
}
void operator=(sample&b)
{
if(a>b.a)
cout<<"c1 is greater"<<endl;
else
cout<<"c2 is greater"<<endl;
}};
int main()
{
sample s1,s2;
s1.get();
s2.get();
s1.operator=(s2);
return 0;
}
