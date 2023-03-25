#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
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
