#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3;
    cout<<"Enter Angles in Degrees"<<endl;
    cout<<"Enter Angle 1: ";cin>>a1;
    cout<<"Enter Angle 2: ";cin>>a2;
    cout<<"Enter Angle 3: ";cin>>a3;
    if(a1+a2+a3==180){
        cout<<"Triangle Is Valid";
    }
    else{
        cout<<"Triangle is not Valid";   
     }
 return 0;
}