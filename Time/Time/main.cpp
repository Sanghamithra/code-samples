#include<iostream>
#include<iomanip>
#include "time.h"
#include "time.cpp"


using namespace std;

int main()
{

Time t1;
t1.sethours(10);
t1.setminutes(10);
t1.setseconds(10);
cout<<"This is time"<<endl;

t1.printtime();
system("pause");
}
