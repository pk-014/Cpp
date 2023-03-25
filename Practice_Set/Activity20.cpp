#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
    cout<<"Activity No.20"<<endl;
    cout<<"\t Write a program to print a table of a given number using \"for loop\"."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int i,num;
	cout<<"\t\t\tEnter The Number "<<endl;
	cin>>num;
	for(i=1;i<=10;i++){
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
 return 0;
 }
