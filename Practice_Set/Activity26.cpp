#include <iostream>
#include<iomanip>
using namespace std;
int main(){
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
