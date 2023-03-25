#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
    cout<<"Activity No.7"<<endl;
    cout<<"\t Write a program that take the student name, discipline, year of admission and registration \n from user and display on the computer screen."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	string name,dis,yoa,reg;
	cout<<"\t\t\t Please Enter Your Name "<<endl;
	cin>>name;
	cout<<"\t\t\t Please Enter Your Discipline"<<endl;
	cin>>dis;
	cout<<"\t\t\t Please Enter Your Year Of Admission "<<endl;
	cin>>yoa;
	cout<<"\t\t\t Please Enter Your Registration No."<<endl;
	cin>>reg;
	cout<<endl<<"Name"<<setw(30)<<"Discipline"<<setw(30)<<"Year Of Admission"<<setw(30)<<"Registration No.";
	cout<<endl<<name<<setw(30)<<dis<<setw(30)<<yoa<<setw(30)<<reg;
 return 0;
 }
