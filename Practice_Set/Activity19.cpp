#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	    cout<<"Activity No.19"<<endl;
    cout<<"\t Write a program that take two numbers and an operator from user and display the sum, difference,"
	<<"\nmultiplication, division and remainder using switch statement."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int num1,num2;
	char operators;
	cout<<"\t\t\tEnter The First Number "<<endl;
	cin>>num1;
	cout<<"\t\t\tEnter The Second Number "<<endl;
	cin>>num2;
	cout<<"\t\t\tEnter The Arithematic Operator "<<endl;
	cin>>operators;
	switch(operators){
		case '+':
			cout<<num1+num2;
			break;
		case '-':
			cout<<num1-num2;
			break;
		case '*':
			cout<<num1*num2;
			break;
		case '/':
			cout<<num1/num2;
			break;
		case '%':
			cout<<num1%num2;
			break;
	}
 return 0;
 }
