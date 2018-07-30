#include<iostream>
using namespace std;
inline int addr(int a,int b)
{
return a+b;
}
inline int addi(int c,int d)
{
return c+d;
}
inline int subr(int a,int b)
{
return a-b;
}
inline int subi(int c,int d)
{
return c-d;
}
int main()
{
int r1,i1,r2,i2,sumreal,sumimg;
cout<<"enter real and img parts"<<endl;
cin>>r1>>i1;
cout<<"enter 2 real and 2 img parts"<<endl;
cin>>r2>>i2;
sumreal=addr(r1,r2);
sumimg=addi(i1,i2);
int subreal=subr(r1,r2);
int subimg=subi(i1,i2);
cout<<"addition"<<sumreal<<"+i("<<sumimg<<")"<<endl;
cout<<"subtraction"<<subreal<"+i("<subimg<<")"<<endl;
return 0;
}


