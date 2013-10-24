#ifndef header_h
#define header_h
#include<iostream>
using namespace std;
class Time
{
	friend ostream &operator<<(ostream &out, Time  &t);
public:
	Time();
	Time(int , int , int );
	
	void setTime(int, int , int );
	Time operator+(Time &);
	Time &operator++();
	Time &operator--();
	//int endofminute(int);
private:
	int hours;
	int minutes;
	int seconds;
};
#endif

