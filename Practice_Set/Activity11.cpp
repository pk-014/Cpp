#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"Activity No.11"<<endl;
    cout<<"\t Write a program to input a number from the user. Use if-else statement to find out whether the"
	<<"\nnumber is less than or greater than 100."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	long double num;
	cout<<"\t\t\tEnter The Number "<<endl;
	cin>>num;
	if(num>100){
		cout<<"\n\t\t\t"<<num<<" is Greater than 100";
	}
	else{
		cout<<"\n\t\t\t"<<num<<" is Less than 100";
	}
 return 0;
 }
