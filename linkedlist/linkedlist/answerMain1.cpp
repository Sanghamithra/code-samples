#include<iostream>
#include<iomanip>
using namespace std;
#include<string>
#include "linkedList.h"
#include "unorderedLinkedList.h"





int main(){
	unorderedLinkedList<int> list1;
	int num;
	string result, line;
	//const int LENGTH=100;
	string str;
	cout<<"enter number ending -999"<<endl;
	cin>>num;
	while(num!= -999){
		list1.insertFirst(num);
		cin >>num;
	}
	cout<<endl;
	list1.print();cout<<endl;
	list1.rotate();
	//list1.print();
	cout<<"Enter the string"<<endl;
	cin>>str;
	unorderedLinkedList<char> strList;
	for(unsigned int i=0;i<str.length();i++)
	{
		strList.insertLast(str[i]);
	}
	strList.print();cout<<endl;
	strList.rotate();
	strList.print();
	cout<<"Pig Latin form of "<<str << "is \n"<<list1.piglatinform(str)<<endl;
	cout<<"Integers in linkedlist are"<<endl;
	list1.print();
	list1.rotate();
	cout<<endl;
	system("Pause");
	return 0;
}
