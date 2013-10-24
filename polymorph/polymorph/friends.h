#ifndef friends_h
#define friends_h
#include<string>
#include "contact.h"

using namespace std;
class friends: public contact
{
public:
	friends(string );
	string getrelationship();

};


#endif