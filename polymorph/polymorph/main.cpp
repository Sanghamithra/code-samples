#include <iostream>
#include <string>
#include<fstream>
#include<vector>
#include <sstream>
#include "contact.h"
#include "friends.h"
#include "enemy.h"
using namespace std;

void printTarget(contact *);
	void printTarget(contact* cp ){
		
		cout << cp->getrelationship() << endl;	
	};
int main()
{
	contact * contact_t  = new contact("Mike");
	friends * Frnd_t= new friends("Alex");
	enemy * enemy_t = new enemy("Jeff");

	printTarget(contact_t);
	printTarget(Frnd_t);
	printTarget(enemy_t);

	ifstream infile ;
	vector <contact *> contact_vec;
	string type ="";
	string line;
	string buf;
	string name= "";
	int pos;

	infile.open("example.txt");
	if (infile.is_open())	{
		while(!infile.eof()){
			getline (infile, line);
			int len = line.length();
			if ((pos = line.find ("Friend")) != -1){
				//code for Friend
				name = line.substr (0, pos);
				type = "Friend";
				friends *fd = new friends(name);
				contact_vec.push_back(fd);
				cout<<name<<"is a friend"<<endl;

				name = "";
			} else if ((pos = line.find ("Enemy")) != -1){
				//code for Enemy
				name = line.substr (0,pos);
				type = "enemy";
				enemy *en= new enemy(name);
				contact_vec.push_back(en);
				cout<<name<<"is enemy"<<endl;
				name = "";
			} else if ((pos = line.find ("Neutral")) != -1) {
				//Code for Neutral
				name = line.substr (0,pos);
				type = "Neutral";
				contact *cp= new contact(name);
				contact_vec.push_back(cp);
				cout<<name<<"is neutral"<<endl;
				name = "";
			} else {
				//Code for Neutral
				name = line;
				cout << name << endl;
			}

		}
	}


	for (int i = 0 ; i <contact_vec.size();i++){
	
	contact *cp = contact_vec[i];
	string value = cp->getrelationship();
	cout<<value<<endl;
	
	}


	system("pause");
}

		/*
		if( buf == "Neutral"){
		type = "Neutral";
		contact *cp= new contact(name);
		contact_vec.push_back(cp);
		cout<<name<<"is neutral"<<endl;
		name = "";
		}
		else if (buf == "Friend"){
		type = "Friend";
		friends *fd = new friends(name);
		contact_vec.push_back(fd);
		cout<<name<<"is a friend"<<endl;

		name = "";
		}
		else if(buf== "Enemy"){
		type = "enemy";
		enemy *en= new enemy(name);
		contact_vec.push_back(en);
		cout<<name<<"is enemy"<<endl;
		name = "";
		}
		else {
		name = name+buf;
		cout<<name<<endl;

		}
		}
		}
		*/

