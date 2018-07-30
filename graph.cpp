#include<iostream>
#include<math.h>
using namespace std;
class graph
{
public:
int a,b,d;
void get()
{
cout<<"enter the coordinates"<<endl;
cin>>a>>b;
}
void distance()
{
d=(a-0)*(a-0)+(b-0)*(b-0);
}
void display()
{
if(a>0)
{
if(b>0)
cout<<"first"<<endl;
else
cout<<"four"<<endl;
}
else if(a<0)
{
if(b>0)
cout<<"second"<<endl;
else
cout<<"third"<<endl;
}
else
cout<<"value given is orgin"<<endl;
cout<<"the distance is "<<sqrt(d)<<endl;
}
};
int main()
{
graph g1;
g1.get();
g1.distance();
g1.display();
return 0;
}
