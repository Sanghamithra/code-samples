#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include <stack>
#include <fstream>
#include <sstream>
#include <windows.h>
#include <ios>
#include <istream>

using namespace std;

void rename_file(){

	remove("destination.txt");
	char old_name[]="destination2.txt";
	char new_name[]="destination.txt";
        int result=rename(old_name,new_name);	
        
}


int main(int argc,char * argv[]){
	ifstream file;
	
	
	
	cout<<"You are opening "<<file<<" and transfering to destination.txt"<<endl;
	file.open("source.txt");

	//cout<<"Select file to write"<<endl;
	//cin>>ofile;
     
	string   line;
	const int size = 100;
	char arr[size];
	
	//string file_d="destination.txt";
	ofstream out;
	out.open("destination.txt");
	ofstream out2;
	out2.open("destination2.txt");
	while(getline(file, line))
	{
		stringstream   linestream(line);
		string         data,val1;
		getline(linestream, data,'\n'); 
		linestream >> val1 ;
		cout<<data<<endl;
		out<<data<<endl;
		
	}
	file.close();
	int choice;
	cout<<"Do you want to add,edit or delete student records? press 1 to add 2 to edit and 3 to delete for yes"<<endl;
	cin>>choice;
	if (choice==1)
	{
	     
	      string str="";
	      cout<<"Please enter the full details: ";
	      cin.ignore();
	      getline(cin,str);
	      out<<str<<endl;
	      cout<<"\nEntered new name "<<str<<endl;
	}
	if (choice==2){
		
		cout<<"Enter the row number you want to edit"<<endl;
		cin>>choice;
		int i=1;
		ifstream file3;
		file3.open("destination.txt");
		string line3;
		
		while(getline(file3,line3))
		{
		    
		        string data,val1,str;
	                stringstream linestream(line3);
			getline(linestream,data,'\n');
			linestream>>val1;
			if(i==choice){
			 cout<<"Please enter the full details: ";
			 cin.ignore();
			 getline(cin,str);
			 out2<<str<<endl;
			}else
			{
			out2<<data<<endl;
			}
			i++;
		}
		file3.close();
		rename_file();

	}
	else if (choice==3){
		
		cout<<"Enter the row number you want to delete"<<endl;
		cin>>choice;
		int i=1;
		ifstream file4;
		file4.open("destination.txt");
		string line4;

		while(getline(file4,line4))
		{
		    
		        string data,val1,str;
	                stringstream linestream(line4);
			getline(linestream,data,'\n');
			linestream>>val1;
			if(i==choice){
			 cout<<"Deleting this row"<<endl;
			}else
			{
			cout<<"Deleting ..."<<endl;
			out2<<data<<endl;
			}
			i++;
		}
		file4.close();
		rename_file();

	}
	
	cout<<"Changes written to file destination.txt"<<endl;
        
        ifstream file5;
        file5.open("destination.txt");
        string line5;
	
		
	while(getline(file5, line5))
	{
		stringstream   linestream(line5);
		string         data;
		getline(linestream, data,'\n'); 
		
		cout<<data<<endl;
		
		
	}


	out.close();
	system("pause");
	return 0;
}