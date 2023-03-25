// Leap Year
#include<iostream>
using namespace std;
int main()
{
 char rerun;
do
{
    std::system("Color 70");
    int year;
    cout<<"Enter Year: ";cin>>year;
    if(year%4==0)
        cout<<"Leap";
    else{
        cout<<"Not ";
    }

std::cout<<"\nWant to Re-Run the Program?\n\f\'y\' for YES \t\t \'n\' for NO\n";
std::cin>>rerun;
std::system("CLS");
}while (rerun=='y' || rerun=='Y');
 return 0;
}