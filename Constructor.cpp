#include<iostream>
using namespace std;
class hello
{
public:
int a,b,e,f,g;
hello()
{
cout<<"default constructor"<<endl;
}
hello(int c,int d)
{a=c;
b=d;
cout<<"parameterized constructor"<<a<<b<<endl;
}
hello(int x,int y,int z)
{
a=x;
b=y;
f=z;
}
hello(hello &q)
{
e=q.a;
f=q.b;
cout<<"copy constructor"<<e<<f<<endl;
}
~hello(){
cout<<"Destructor Called"<<endl;
}};
int main()
{
hello h1;
hello h2(5,4);
hello h3(5,4,3);
//hello h3;
h3=h2;
return 0;
}


