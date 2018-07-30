#include<iostream>
using namespace std;
class add
{
public:
int a;
void sum(add *y)
{
y->a-=2;
}
};
int main()
{
add h;
h.a=3;
add *h1;
//h1=&h;
h1->sum(&h);
cout<<h.a;
return 0;
}

