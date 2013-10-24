#include<ios>
#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
#include<ctype.h>
#include<stack>
#include<stdlib.h>
#include<Windows.h>
#include<fstream>

using namespace std;

int main()
{
	ifstream infile;
	ofstream outfile;
	string line;
	string name;
	int pos;

	outfile.open("destination2.txt");
	infile.open("destination1.txt");
	if (infile.is_open())
	{
		while(!infile.eof())
		{

			getline(infile, line );
			int len = line.length();
			if((pos = line.find(","))!=-1)
			{
			
				name = line.substr(0,pos);
				cout<<"Last is"<< name<<endl;
				outfile<<"Last name is "<<name<<endl;
			
			}
			
			}
		infile.close();
		outfile.close();

	}
	system("pause");
	return 0;
}
		/*int choice;
		cout<<"Do you want to add,edit or delete student records? press 1 to add 2 to edit and 3 to delete for yes"<<endl;
		cin>>choice;
		if (choice==1)
		{

			string str="";
			cout<<"Please enter the full details: ";
			cin.ignore();
			getline(cin,str);
			outfile<<str<<endl;
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
					outfile2<<str<<endl;
				}else
				{
					outfile2<<data<<endl;
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
					outfile2<<data<<endl;
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
		*/

	