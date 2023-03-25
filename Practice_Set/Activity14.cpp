#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	    cout<<"Activity No.14"<<endl;
    cout<<"\t Write a program that take a number from user and display the number is divisible by 3 or not using"
	<<"\nIF-ELSE statement."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int num;
	cout<<"\t\t\tEnter The Number "<<endl;
	cin>>num;
	if(num%3==0){
		cout<<"\n\t\t\t"<<num<<" Is Divisible By 3";
	}
	else{
		cout<<"\n\t\t\t"<<num<<" Is Not Divisible By 3";
	}
 return 0;
 }
