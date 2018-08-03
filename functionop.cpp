#include<iostream>
using namespace std;
class hello
{
public:
int a;
void get()
{
cin>>a;
}
void operator()(hello &h)
{
if(a>=h.a)
cout<<"h1 is greater"<<endl;
else
cout<<"h1 is small"<<endl;
}
};
int main()
{
hello h1,h2;
h1.get();
h2.get();
h1.operator()(h2);
return 0;
}
