#include<iostream>
using namespace std;
class complex
{
public:
int r,i,sumreal,sumimg;
public:
void get()
{
cout<<"enter real and img parts"<<endl;
cin>>r>>i;
}
void operator+(complex &temp)
{
sumreal=r+temp.r;
sumimg=i+temp.i;
cout<<"the complex no is"<<sumreal<<"i"<<sumimg<<endl;
}
};
int main()
{
complex c1;
complex c2;
complex c3;
c1.get();
c2.get();
c1+c2;
return 0;
}

