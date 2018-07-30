#include<iostream>
using namespace std;
template<typename t>
t add(t a,t b)
{
return a+b;
}
int main()
{
int c;
float d;
c=add<int>(2,2);
d=add<float>(3.0,2.0);
cout<<c<<d;
return 0;
}

