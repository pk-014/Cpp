#include <iostream>
using namespace std;
int main(){
	cout<<"Activity No.4"<<endl;
    cout<<"\t Write a program that take a 4-digit number from user and display the number in reverse \n order on computer screen."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int num1,rev;
	cout<<"\t\t\tPlease Enter the a 4-Digit Number "<<endl;
	cin>>num1;
	cout<<"\t\t\tIn Resverse Order  "<<endl;
	for(num1;num1!=0;num1=num1/10){
		rev=num1%10;
		cout<<rev;
	}
 return 0;
 }
