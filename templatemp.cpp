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
friend void sum(add );
};
void sum(add w)
{
int tot;
tot=w.b+w.a;
cout<<tot;
}
int main()
{
add s;
s.get();
sum(s);
return 0;
}
