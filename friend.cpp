#include<iostream>
using namespace std;
class add
{
public:
int a,b;
void get()
{
cin>>a>>b;
}
friend void sum(add&z);
};
void sum(add &z)
{
int c,d;
c=z.a;
d=z.b;
cout<<c+d;
}
int main()
{
add c;
c.get();
sum(c);
return 0;
}
