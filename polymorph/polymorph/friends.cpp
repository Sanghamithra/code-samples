
#include <iostream>
#include <iomanip>
#include <string>

#include"friends.h"
using namespace std;

friends::friends(string name_t1):contact(name_t1){}


string friends::getrelationship()
{

string tmp_2= "I<3"+getname();
return tmp_2;
}