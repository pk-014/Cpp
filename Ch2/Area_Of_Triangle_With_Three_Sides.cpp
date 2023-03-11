// area of triangle
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long double s1,s2,s3,semiperimeter,area;
    cout<<"Enter Sides of triangle:"; 
    cin>>s1>>s2>>s3;
    semiperimeter=(s1+s2+s3)/2;
    s1=semiperimeter-s1;
    s2=semiperimeter-s2;
    s3=semiperimeter-s3;
    area=semiperimeter*s1*s2*s3;
    area=sqrt(area); 
    cout<<endl<<area;
	return 0; 
}