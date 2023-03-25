#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
    cout<<"Activity No.17"<<endl;
    cout<<"\t Write a program that take three numbers from user and display the numbers are equal or not using"<<"\nNESTED-IF statement."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	long double num1,num2,num3;
	cout<<"\t\t\tEnter The First Number "<<endl;
	cin>>num1;
	cout<<"\t\t\tEnter The Second Number "<<endl;
	cin>>num2;
	cout<<"\t\t\tEnter The Third Number "<<endl;
	cin>>num3;
	if(num1==num2){
		if(num1==num3 && num3==num2)
		cout<<"All Equal";
		else{
			cout<<"Only First Number ("<<num1<<") and Second Number ("<<num2<<") are Equal.";
		}
	}
	
	else if(num2==num3){
		if(num2==num1 && num1==num3){
			cout<<"All Equal";
		}
		else{
			cout<<"Only Second Number ("<<num2<<") and Third Number ("<<num3<<") are Equal.";
		}
	}
	
	else if(num1==num3){
			if(num1==num2 && num2==num3){
				cout<<"All Equal";
			}
			else{
				cout<<"Only First Number ("<<num1<<") and Third Number ("<<num3<<") are Equal.";

			}
	}
	else{
		cout<<"All Are Different";
	}
	
	
 return 0;
 }
