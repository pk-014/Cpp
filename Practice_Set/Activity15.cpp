#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
    cout<<"Activity No.15"<<endl;
    cout<<"\t Write a program that take a number from user and display the number is even or odd using IF-ELSE statement."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int num;
	cout<<"\t\t\tEnter The Number "<<endl;
	cin>>num;
	if(num%2==0){
		cout<<"\n\t\t\t"<<num<<" Is Even";
	}
	else{
		cout<<"\n\t\t\t"<<num<<" Is Odd";
	}
 return 0;
 }
