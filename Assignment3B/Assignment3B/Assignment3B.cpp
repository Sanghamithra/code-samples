#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

int main(){
	ifstream infile;
	ofstream outfile;
	int x;
	string line;
	const int size = 1000;
	char arr[size];
	string  str1;
	infile.open("sample.txt");
	while(!infile.eof()){
	getline(infile,line);
		
		unsigned str = line.find(",");
		str1 = line.substr(0,str);
		cout<<str1;
		arr[size]<<str1;
	}

	outfile.open("outsample.txt");
		outfile<<str1;
	

	system("pause");

}
