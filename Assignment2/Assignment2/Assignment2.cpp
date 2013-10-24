#include<iostream>
#include<iomanip>

using namespace std;

int main(){

	int i, j , size;
	cout<<"Enter the size"<<endl;
	cin>>size;
	for ( i =1; i <=size;  ++i){
		for( int j =1; j <=i; ++j){
		
		cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
	system("pause");
}

/*
int main(){
int i , j , size, k;

cout<<"enter the size of pyramid"<<endl;
cin>>size;
for(i =1;i<=size;++i)
{
	for( j =1;j<=i-1;++j){
	cout<<" ";
	}
	while(k!=2*i-1){
	cout<<"*";
	++k;
	}
	k =0;
	cout<<"\n";
}
return 0;
}*/