#include <iostream>
using namespace std;
int main(){
	   cout<<"Activity No.2"<<endl;
    cout<<"\t Write a program that take the radius of a circle from user and calculate the area and circumference \n of circle and display the results on screen."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl;
	long double radius,pi,area,circum;
	radius=0;
	pi=3.14159265;
	cout<<"\t\t\tPlease Enter the Radius "<<endl;
	cin>>radius;
	circum=2*pi*radius;
	area=pi*radius*radius;
	cout<<"\t\t\tThe Circumference is "<<circum<<endl;
	cout<<"\t\t\tThe Area is "<<area;	
	
	
	
	
 return 0;
 }
