#include<iostream>
using namespace std;
class hello
{
public:
int a,b;
void get()
{
cin>>a>>b;
}
friend ostream &operator<<(ostream &z,hello &c);
};
ostream &operator<<(ostream &z,hello &c)
{
int sum;
sum=c.a+c.b;
z<<sum;
}
int main()
{
hello h1;
h1.get();
cout<<h1;
return 0;
}
