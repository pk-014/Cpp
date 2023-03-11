// Leap Year
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year: ";cin>>year;
    if(year%4==0)
        cout<<"Leap";
    else{
        cout<<"Not ";
    }
 return 0;
}