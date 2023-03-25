#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    cout<<"Activity No.10"<<endl;
    cout<<"\t Write a program that take the employee name and basic salary from user. If the basic salary is less"
	<<"\nthan or equal to 5000, then take house rent (30% of basic salary), contract allowance (45% of basic salary),"
	<<"\nconveyance allowance (45% of basic salary), medical allowance Rs.193/. On the other hand, if the basic salary is"
	<<"\nmore than 5000, then take all the parameters same except taking income tax (2% of basic salary), medical allowance"
	<<"\nRs. 96/- and calculate net salary by adding basic salary, house rent, contract allowance, conveyance allowance,"
	<<"\nmedical allowance and subtracting income tax using IF-Statement"<<endl;
	cout<<"\n\n Solution:"<<endl<<endl<<endl;
	long double basic_salary,conveyance_allowance,medical_allowance,income_tax,house_rent,contract_allowance,net_salary;
	string name;
	cout<<"\t\t Please Enter Your Name "<<endl;
	getline(cin,name);
	cout<<"\t\t Please Enter Your Basic Salary "<<endl;
	cin>>basic_salary;
	
	if(basic_salary<=5000){
		house_rent=0.3*basic_salary;
		contract_allowance=0.45*basic_salary;
		conveyance_allowance=0.45*basic_salary;
		medical_allowance=193;
		income_tax=0;
	}
	else{
		house_rent=0.3*basic_salary;
		contract_allowance=0.45*basic_salary;
		conveyance_allowance=0.45*basic_salary;
		medical_allowance=96;
		income_tax=0.02*basic_salary;
		
	}
	cout<<endl<<"\n\t\t\tName: "<<setw(30)<<name;
	cout<<endl<<"\t\t\tBasic Salary: "<<setw(22)<<basic_salary;
	cout<<endl<<"\t\t\tConveyance Allowance:"<<setw(15)<<conveyance_allowance;
	cout<<endl<<"\t\t\tMedical Allowance:"<<setw(18)<<medical_allowance;
	cout<<endl<<"\t\t\tHouse Rent:"<<setw(25)<<house_rent;
	cout<<endl<<"\t\t\tContract Allowance:"<<setw(17)<<contract_allowance;
	cout<<endl<<"\t\t\tIncome Tax:"<<setw(25)<<income_tax<<endl;
	net_salary=(basic_salary+house_rent+contract_allowance+conveyance_allowance+medical_allowance)-income_tax;
	int i;
	cout<<"\n\t\t";
	for(i=0;i<=55;i++){
		cout<<"-";
	}
	cout<<endl<<endl<<"\t\t\t\tNet Salary:"<<setw(10)<<net_salary<<endl;
		cout<<"\n\t\t";
	for(i=0;i<=55;i++){
		cout<<"-";
	}
	cout<<endl;
 return 0;
 }
