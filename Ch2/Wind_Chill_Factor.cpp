// wind chill factor
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long double v,t,wcf;
    cout<<"Enter the Temperature:";cin>>t;
    cout<<"Enter the Wind Velocity:";cin>>v;
    wcf=35.74+(0.6215*t)+((0.4275*t)-35.75)*pow(v,0.16);
    cout<<"Wind Chill Factor is: "<<wcf;
	return 0; 
}