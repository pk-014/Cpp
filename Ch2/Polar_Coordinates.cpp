// polar coordinates
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long double x,y,a,b;
    cout<<"Enter Cartesian Co-ordinates"<<endl;
    cout<<"x: ";cin>>x;cout<<"y: ";cin>>y;
    cout<<"Polar Co-ordinates are ";
    a=sqrt((x*x)+(y*y));
    b=atan(y/x);
    cout<<a<<","<<b;
	return 0; 
}