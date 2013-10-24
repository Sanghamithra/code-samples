#include <iostream>
#include<iomanip>
#include<string>
#include "contact.h"

using namespace std;

void contact::setname( string name_t){

	name = name_t;

}
contact::contact(string name_t1){

	setname( name_t1);

}
string contact::getname()const{

	return name;

}

string contact::getrelationship(){

string tmp_t1= "I 0"+getname();

return tmp_t1;
}
