#ifndef header_h
#define header_h

#include<iostream>
#include<iomanip>

using namespace std;

class Time{
public:
Time();
void sethours(int);
void setminutes(int);
void setseconds(int);
int gethours()const;
int getminutes()const;
int getseconds()const;
void printtime();

private:
	int hour;
	int minute;
	int second;

};
#endif;