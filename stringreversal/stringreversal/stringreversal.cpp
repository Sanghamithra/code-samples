#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
	string str;
	cout<<"Input a string"<<endl;
	getline(cin,str);
	str.rbegin();
	for (std::string::reverse_iterator rit=str.rbegin(); rit!=str.rend(); ++rit)
    std::cout << *rit;
	cout<<endl;
	system("pause");
return 0;
}