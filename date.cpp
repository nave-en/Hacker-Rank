#include<iostream>
using namespace std;
class hello
{
public:
int date,month,year;
int rdate,rmonth,ryear;
void get()
{
cin>>date>>month>>year;
}
void display(hello &q)
{
int temp;
date=date+q.date;
month=month+q.month;
year=year+q.year;
temp=date/30;
month+=temp;
rdate=date%30;
temp=month/12;
ryear=year+temp;
rmonth=month%12;
cout<<"the result"<<endl;
cout<<rdate<<rmonth<<ryear;
}
};
int main()
{
hello h1,h2;
h1.get();
h2.get();
h1.display(h2);
return 0;
}
