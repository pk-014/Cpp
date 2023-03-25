#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	    cout<<"Activity No.21"<<endl;
    cout<<"\t Write a program to display the odd numbers from 1 to 10 natural numbers and also display"<<"\nthe sum of these numbers using FOR loop."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int i,sum=0;
	cout<<"Odd Numbers:  ";
	for(i=1;i<=10;i++){
		if(i%2!=0){
			cout<<i;
			sum=sum+i;
			continue;
		}
			

	}
	cout<<"\nThe Sum is:   "<<sum;
 return 0;
 }
