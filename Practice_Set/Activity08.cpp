#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"Activity No.8"<<endl;
    cout<<"\t Write a program that take two numbers from user and display the greater number using IF-Statement."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int num1,num2;
	cout<<"\t\t\t Please Enter First Number "<<endl;
	cin>>num1;
	cout<<"\t\t\t Please Enter Second Number "<<endl;
	cin>>num2;
	if(num1>num2){
		cout<<num1<<" is greater than "<<num2;
	}
	if(num2>num1){
		cout<<num2<<" is greater than "<<num1;
	}
 return 0;
 }
