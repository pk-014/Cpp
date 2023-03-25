#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
    cout<<"Activity No.6"<<endl;
    cout<<"\t Write a program that take the roll number of the student and amount in dollar from user \n and display the roll number of the student, amount in dollar and amount in rupees on computer screen."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int rollno,money;
	cout<<"\t\t\t Please Enter Your Roll No. "<<endl;
	cin>>rollno;
	cout<<"\t\t\t Please Enter Your Money (In Dollars) "<<endl;
	cin>>money;
	cout<<endl<<endl;
	money=260*money;
	cout<<"Roll No.";
	cout<<setw(40)<<"Money(In Rupees)"<<endl;
	cout<<rollno;
	cout<<setw(36)<<money<<endl<<endl;
	
 return 0;
 }
