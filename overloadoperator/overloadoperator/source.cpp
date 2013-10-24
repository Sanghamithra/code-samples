#include<iostream>
#include<iomanip>
#include<string>
#include "header.h"

using namespace std;

int main(){

	Time t(5,40,20);
	Time t2(3,23,23);
	Time t3= t+t2;
	cout<<t<<endl;
	cout<<t2<<endl;
	cout<<t3<<endl;
	cout<<" Operator ++ overloading"<<endl;
	cout<<++t2<<endl;
	system("Pause");

}