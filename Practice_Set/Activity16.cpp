#include <iostream>
#include<iomanip>
using namespace std;
int main(){

    cout<<"Activity No.16"<<endl;
    cout<<"\t Write a program to compare the three numbers and display the greater number using nested-if"
	<<"\nstatement and display the result in the below box."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	long double num1,num2,num3;
	cout<<"\t\t\tEnter The First Number "<<endl;
	cin>>num1;
	cout<<"\t\t\tEnter The Second Number "<<endl;
	cin>>num2;
	cout<<"\t\t\tEnter The Third Number "<<endl;
	cin>>num3;
	if(num1>=num2){
		if(num1>=num3 && num2>=num3){
			cout<<"\n\n\t\t\t"<<num1<<" > "<<num2<<" > "<<num3;
		}
		else if(num1>=num3 && num3>=num2){
			cout<<"\n\n\t\t\t"<<num1<<" > "<<num3<<" > "<<num2;
		}
		else{
			cout<<"\n\n\t\t\t"<<num3<<" > "<<num1<<" > "<<num2;
		}
	}
		//num2>=num1	
	else{
		if(num2>=num3 && num3>=num1){
				cout<<"\n\n\t\t\t"<<num2<<" > "<<num3<<" > "<<num1;
		}
		else if(num2>=num3 && num1>=num3){
				cout<<"\n\n\t\t\t"<<num2<<" > "<<num1<<" > "<<num3;
		}
		else{
				cout<<"\n\n\t\t\t"<<num3<<" > "<<num2<<" > "<<num1;

		}
	}
	

 return 0;
 }
