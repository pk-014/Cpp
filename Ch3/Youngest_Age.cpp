// Youngest Age
#include<iostream>
using namespace std;
int main()
{
    int age_r,age_s,age_a;
    cout<<"Enter Age of Ram: ";cin>>age_r;
    cout<<"Enter Age of Shayam: ";cin>>age_s;
    cout<<"Enter Age of Ajay: ";cin>>age_a;
    if(age_r>=age_s && age_r>=age_a && age_a>=age_s){
    	cout<<"shayam is youngest";
	}
	else if(age_r>=age_s && age_r>=age_a && age_s>=age_a){
		cout<<"ajay is youngest";
	}
	else if(age_s>=age_r && age_s>=age_a && age_a>=age_r){
		cout<<"ram is youngest";
	}
	else if(age_s>=age_r && age_s>=age_a && age_r>=age_a){
		cout<<"ajay is youngest";
	}
	else if(age_a>=age_r && age_a>=age_s && age_r>=age_s){
		cout<<"shayam is youngest";
	}
	else if(age_a>=age_r && age_a>=age_s && age_s>=age_r){
		cout<<"ram is youngest";
	}
	else{
		cout<<"lol";
	}
 return 0;
}