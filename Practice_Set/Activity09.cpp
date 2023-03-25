#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"Activity No.9"<<endl;
    cout<<"\t Write a program that take previous and current month reading from user and calculate the"<<endl
	<<"consumed units in a month. If the consumed units are less and equal to 300, then calculate the \"electricity bill\" "<<endl
	<<"by taking Rs. 13/- per unit rate. On the other hand, if the consumed units are more than 300, then calculate "<<endl
	<<"the \"electricity bill\" by taking Rs.18/- per unit rate as well as 5% surcharge in the bill using IF-Statement."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	long double current_reading,previous_reading,surcharge,total_reading,per_unit;
	cout<<"\t\t\t Please Enter Current Reading "<<endl;
	cin>> current_reading;
	cout<<"\t\t\t Please Enter Previous Reading "<<endl;
	cin>> previous_reading;
	total_reading=current_reading-previous_reading;
	cout<<endl<<"\t\tCurrent Reading: "<<setw(40)<<current_reading;
	cout<<endl<<"\t\tPrevious Reading:"<<setw(40)<<previous_reading;
	
	cout<<endl<<"\t\tTotal Units: "<<setw(44)<<current_reading<<"-"<<previous_reading<<"="<<current_reading-previous_reading<<endl;
	if(total_reading<=300){
		total_reading=total_reading*13;
		per_unit=13;
		cout<<"\t\tRs. Per Unit: "<<setw(42)<<per_unit<<endl;
		
	}
	else{
		total_reading=total_reading*18;
		surcharge=0.05*total_reading;
		per_unit=18;
		cout<<"\t\tRs. Per Unit: "<<setw(42)<<per_unit<<endl;
		total_reading=surcharge+total_reading;
		cout<<"\t\tSurcharge: "<<setw(47)<<surcharge<<endl;
	}
	int i;
	cout<<"\n\t";
	for(i=0;i<=75;i++){
		cout<<"-";
	}
		cout<<"\n\n\t\tTotal Bill:  "<<setw(45)<<total_reading;
	 
	cout<<"\n\n\t";
	for(i=0;i<=75;i++){
		cout<<"-";
	}
	
	
 return 0;
 }
