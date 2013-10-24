#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
/* 
To display the sum of numbers given after the size and display the number without any formatting to a standard output using cout

first number = 3 ( how many numbers to add)
second number = 1 ;
third number  = 5;
fourth number = 5;

display sume = 1+5+5 =11
*/
int main(int argc , int argv[]){
	int i,k=0;
	cout<<"Enter the size:";
	cin>>argc;

	for( i =0 ; i < argc; i++){
	cout<<"enter"<<i<<" value:";
	cin>>argv[i];
	k = argv[i]+k;
	}
	
	cout<<"Sum of"<<argc<<"values is:"<<k<<endl;
	system("pause");

}