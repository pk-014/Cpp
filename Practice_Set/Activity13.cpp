#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	    cout<<"Activity No.13"<<endl;
    cout<<"\t Write a program that take input marks obtained by a student in a subject. The marks of each subject is 100."
	<<"\nFind out grade of the student by using IF-Else statement."
	<<endl<<"\tgrade >= 85 		Grade A+" 
	<<endl<<"\tgrade >= 80 		Grade A "
	<<endl<<"\tgrade >=75 		Grade B+"
	<<endl<<"\tgrade >=70 		Grade B"
	<<endl<<"\tgrade >=65 		Grade C+"
	<<endl<<"\tgrade >=60  		Grade C"
	<<endl<<"\tgrade >=55  		Grade D+"
	<<endl<<"\tgrade >=50  		Grade D"
	<<endl<<"\tgrade <  50  		Grade F"<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	long double grade;
	cout<<"\t\t\tEnter Marks(Out Of 100) "<<endl;
	cin>>grade;
	if(grade>100 || grade<0){
		cout<<"\n\t\t\tInvalid Marks!!!";
	}
	else if(grade>=85){
		cout<<"\n\t\t\tYou Got A+ Grade";
	}
	else if(grade>=80){
		cout<<"\n\t\t\tYou Got A Grade";
	}
	else if(grade>=75){
		cout<<"\n\t\t\tYou Got B+ Grade";
	}
	else if(grade>=70){
		cout<<"\n\t\t\tYou Got B Grade";
	}
	else if(grade>=65){
		cout<<"\n\t\t\tYou Got C+ Grade";
	}
	else if(grade>=60){
		cout<<"\n\t\t\tYou Got C Grade";
	}
	else if(grade>=55){
		cout<<"\n\t\t\tYou Got D+ Grade";
	}
	else if(grade>=50){
		cout<<"\n\t\t\tYou Got D Grade";
	}
	else if(grade<50){
		cout<<"\n\t\t\tYou Got F Grade";
	}
	else{
		cout<<"ERROR";
	}
 return 0;
 }
