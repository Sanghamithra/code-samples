#ifndef contact_h
#define contact_h
#include<string>
#include <iostream>
using namespace std;
class  contact{
public:
	friend ostream &operator<<(ostream &, const contact & );
	contact(string);
	void setname(string);
	string getname()const;
	string virtual getrelationship();
protected:
	string name;

};

#endif