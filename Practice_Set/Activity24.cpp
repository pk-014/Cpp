#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"Activity No.24"<<endl;
    cout<<"\t Write a program to find the factorial of any number and display the result on screen using While Loop."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	long double i,num,factorial=1;
	cout<<"\t\t\tEnter The Number "<<endl;
	cin>>num;
	while(num>0){
		cout<<num<<"*";
		factorial=factorial*num;
	num--;
	}
	cout<<"\nFactorial:    "<<factorial;
 return 0;
 }
