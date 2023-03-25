#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"Activity No.23"<<endl;
    cout<<"\t Write a program to print the multiplication table of a number entered from the user using While Loop."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int i,num;
	cout<<"\t\t\tEnter The Number "<<endl;
	cin>>num;
	i=1;
	while(i<=10){
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	i++;
	}
 return 0;
 }
