#include<iostream>
#include "time.h"
#include<iomanip>



Time ::Time(){
	

}

int Time::gethours( )const{

	return hour;

}
int Time::getminutes( )const{

	return minute;

}

int Time::getseconds( )const{

	return second;

}

void Time::sethours(int h){
	hour = h;
}
void Time::setminutes(int m){
	
	minute = m;
}
void Time::setseconds(int s){
	
	second = s;
}
void Time::printtime(){
cout<<"Time is"<<gethours()<<"hours"<<getminutes()<<"minutes"<<getseconds()<<"seconds"<<endl;

}