#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
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
