#include<iostream>
using namespace std;
typedef (*fptr)(int,int);
void add(int a,int b)
{
cout<<a+b;
}
int main()
{
fptr ptr;
ptr=&add;
ptr(5,7);
return 0;
}
