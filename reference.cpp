#include<iostream>
using namespace std;
int main()
{
int a=10;
int &b=a;
b=b+10;
cout<<b<<endl;
cout<<a<<endl;
return 0;
}
