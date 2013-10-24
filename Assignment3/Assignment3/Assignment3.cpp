#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

/* Palindrome*/



int main()
{
string line;
ofstream outfile;
ifstream infile;
infile.open("test.txt");
while(!infile.eof()){
getline(infile,line);
if(equal(line.begin(),line.end(),line.rbegin()))
	cout<<line<<" "<<":"<<"is a Palindrome"<<endl;
else
cout<<line<<" "<<" :Not a palindrome"<<endl;
}
system("pause");
}
