// Leap Year
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year:";cin>>year;
    // in case of leap
    if(year%4==0){
        cout<<year<<" is Leap Year";
    }
    else{
        cout<<year<<" is Not Leap Year";
    }
 return 0;
}