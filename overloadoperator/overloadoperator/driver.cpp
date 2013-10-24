#include<iostream>
#include<iomanip>
#include"header.h"



 ostream &operator<<(ostream &output,  Time &t)
{

	 output<<"(" << t.hours<<t.minutes<<t.seconds<<")";

	 return output;
}

 Time Time::operator+(Time &tmp)
{
	
	int resulthours=hours+tmp.hours;
	int resultminutes=minutes+tmp.minutes;
	int resultseconds=seconds+tmp.seconds;
	return Time(resulthours, resultminutes, resultseconds);
}



Time :: Time(int h , int m , int s)
{
setTime( h ,  m , s);
}

 void Time::setTime(int hh , int mm , int ss){
 hours = hh;
 minutes = mm;
 seconds = ss;
 
 }

 Time &Time::operator++()
 {
 if( seconds !=59){
 
 seconds++;
 }
 else if( minutes <59)
 {
 
 minutes ++;
 seconds =1;
 } 
 else
 {
 hours++;
 minutes=1;
 seconds =1;
 }
 return *this;
 }

