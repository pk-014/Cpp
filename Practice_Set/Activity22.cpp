#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	    cout<<"Activity No.22"<<endl;
    cout<<"\tWrite a program to display the odd numbers from 1 to 10 whole numbers and also display "<<"the sum of these numbers using FOR loop."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	int i,sum=0;
	cout<<"Odd Numbers:  ";
	for(i=0;i<=10;i++){
		if(i%2!=0){
			cout<<i;
			sum=sum+i;
			continue;
		}
			

	}
	cout<<"\nThe Sum is:   "<<sum;
 return 0;
 }
