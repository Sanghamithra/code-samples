#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<assert.h>
#include<algorithm>
using namespace std;

int main()
{
string line;
ofstream outfile;
ifstream infile;
infile.open("example.txt");
while(!infile.eof()){
getline(infile,line);
if(equal(line.begin(),line.end(),line.rbegin()))
	cout<<line<<" "<<":"<<"is a Palindrome"<<endl;
else
cout<<line<<" "<<" :Not a palindrome"<<endl;
}
system("pause");
}




