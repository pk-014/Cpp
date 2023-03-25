#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
    cout<<"Activity No.26"<<endl;
    cout<<"\tWrite a program to display the sum of the series given below using While Loop."<<endl<<
	"\n\t\t\t1+1/2+1/3+1/4+-----------------------+1/45\n  ";
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	double i=1,j,sum;
	while(i<=45){
		j=1/i;
		cout<<j<<endl;
		sum=sum+j;
	i++;
	}
	cout<<endl<<sum;
	
 return 0;
 }
