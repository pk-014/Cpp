#include <iostream>
using namespace std;
int main(){
	cout<<"Activity No.3"<<endl;
    cout<<"\t Write a program that take two numbers from user and display the sum, difference, multiplication, \n division and remainder of the numbers on computer screen."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int num1,num2,sum,diff,multi,division,remainder;
	cout<<"\t\t\tPlease Enter the First Number "<<endl;
	cin>>num1;
	cout<<"\t\t\tPlease Enter the Second Number "<<endl;
	cin>>num2;
	sum=num1+num2;
	diff=num1-num2;
	multi=num1*num2;
	division=num1/num2;
	remainder=num1%num2;
	cout<<"\n=>Arithmetic Operations on these numbers are  "<<endl;
	cout<<endl<<"\t"<<num1<<"+"<<num2<<"="<<sum<<endl<<"\t"<<num1<<"-"<<num2<<"="<<diff<<endl<<"\t"<<num1<<"*"<<num2<<"="<<multi<<endl<<"\t"
	<<num1<<"/"<<num2<<"="<<division<<endl<<"\t"<<num1<<"%"<<num2<<"="<<remainder<<endl;	
	
	
	
	
 return 0;
 }
