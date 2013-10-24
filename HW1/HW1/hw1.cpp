#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
 int num ;
 int size;
 int sum = 0;
 cout<<"Enter the size of numbers"<<endl;
 cin>> size;
 for( int i =0 ; i < size ; i++)
 {
 cout<<" ENter number "<< endl;
 cin>> num;
 sum = sum+ num;
 
 }
  cout<< " Sum of all the numbers is "<< sum << endl;
  system("pause");
}