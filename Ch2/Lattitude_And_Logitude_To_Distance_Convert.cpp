// Lattitude and logitude to distance convert
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long double dis,l1,l2,g1,g2,pi;
    pi=3.14159265;
    cout<<"Enter Values of Latitude (In Degrees)"<<endl;
    cout<<"L1:";cin>>l1;cout<<"L2:";cin>>l2;
    cout<<"Enter Values of Longitude (In Degrees)"<<endl;
    cout<<"G1:";cin>>g1;cout<<"G2:";cin>>g2;
    cout<<endl<<"Distance In Nautical Miles IS: ";
    l1=l1*(pi/180.0);l2=l2*(pi/180.0);g1=g1*(pi/180.0);g2=g2*(pi/180.0);
    dis=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2))*(cos(g2-g1)));
    // dis =3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2–g1));
    cout<<dis;

	return 0; 
}