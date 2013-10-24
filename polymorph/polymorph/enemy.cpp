#include "contact.h"
#include <iostream>
#include<iomanip>
#include "enemy.h"
using namespace std;

enemy::enemy(string name_t3):contact(name_t3){

}
string enemy::getrelationship(){

string temp_t1 ="I</3"+getname();
return temp_t1;
}