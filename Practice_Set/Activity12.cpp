#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	    cout<<"Activity No.8"<<endl;
    cout<<"\t Write a program to calculate the net pay of an employee. Input the basic pay and calculate the net pay \nas follows using IF-Else Statement:"<<endl
	<<"(1) House rent is 45% of the basic pay."<<endl
	<<"(2) Medical allowance is 2% of basic if basic is greater than Rs. 5000/-. It is 5% of basic pay if the pay is\nless than Rs. 5000/-."<<endl
	<<"(3) Conveyance allowance is Rs. 96/- if basic pay is less than Rs. 5000/-. It is Rs. 193/- if the basic pay is\nmore than Rs. 5000/-."<<endl
	<<"=> Net pay is calculated by adding basic pay, medical allowance, conveyance allowance and house rent."<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	float basic_pay,net_pay,house_rent,medical_allowance,conveyance_allowance;
	cout<<"\t\t\t Please Enter Your Basic Pay "<<endl;
	cin>>basic_pay;
	house_rent=0.45*basic_pay;
	if(basic_pay>5000){
		medical_allowance=0.02*basic_pay;
		conveyance_allowance=193;
	}
	else{
		medical_allowance=0.05*basic_pay;
		conveyance_allowance=96;
	}
	net_pay=basic_pay+house_rent+medical_allowance+conveyance_allowance;
	cout<<endl<<"\t\t\tIf your Basic Pay is "<<basic_pay<<endl<<"\t\t\t(1)House Rent is "<<house_rent<<endl
	<<"\t\t\t(2)Medical Allowance is "<<medical_allowance<<endl
	<<"\t\t\t(3)Coveyance Allowance is "<<conveyance_allowance<<endl<<endl;
	cout<<"\t\t\t=>Then Your Net Pay Is "<<net_pay<<endl;





 return 0;
 }
