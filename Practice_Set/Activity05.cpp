#include <iostream>
using namespace std;
int main(){
    cout<<"Activity No.5"<<endl;
    cout<<"\t Write a program that take the temperature in Fahrenheit from user and convert it in Centigrade \n temperature using formula (C=5/9(F-32)) and display the result on computer screen"<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	float tempf,tempc;
	cout<<"\t\t\tPlease Enter the Temperature in Fahrenheit "<<endl;
	cin>>tempf;
	cout<<"\t\t\t Temperature in Centigrade is  "<<endl;
	tempf=tempf-32;
	tempc=0.5555555555555*tempf;
	cout<<tempc;
 return 0;
 }
