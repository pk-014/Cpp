#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
    cout<<"Activity No.25"<<endl;
    cout<<"\t Write a program to display the even numbers from 1 to 10 natural numbers, also display the sum of these\nnumbers using While Loop."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int i=1,sum=0;
	cout<<"Even Numbers:   ";
	while(i<=10){
		if(i%2==0){
			cout<<i;
		sum=sum+i;
		}
	i++;
	}
	cout<<"\nSum:            "<<sum;
 return 0;
 }
