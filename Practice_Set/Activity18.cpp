#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
    cout<<"Activity No.18"<<endl;
    cout<<"\t Write a program that take a character from user and display whether it is vowel or not on the screen."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	char vowel;
	cout<<"\t\t\tEnter Any Alphabet"<<endl;
	cin>>vowel;
	switch(vowel){
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'i':
		case 'I':
		case 'O':
		case 'o':
		case 'u':
		case 'U':
			cout<<"It's Vowel";
			break;
		default:
			cout<<"It's Not Vowel";
	}
	
 return 0;
 }
