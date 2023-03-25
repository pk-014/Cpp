// Boxer weight class
#include<iostream>
using namespace std;
int main()
{
 char rerun;
do
{
    std::system("Color 70");
    long double weight;
    cout<<"Enter Boxer Weight(in pounds): ";cin>>weight;
    if (weight<115)
    {
        cout<<"Flyweight";
    }
    else if (weight>=115 && weight<=121)
    {
        cout<<"Bantamweight";
    }
    else if (weight>=122 && weight<=153)
    {
        cout<<"Featherweight";
    }
    else if (weight>=154 && weight<=189)
    {
        cout<<"Middleweight";
    }
    else if (weight>=190)
    {
        cout<<"Heavyweight";
    }
std::cout<<"\nWant to Re-Run the Program?\n\f\'y\' for YES \t\t \'n\' for NO\n";
std::cin>>rerun;
std::system("CLS");
}while (rerun=='y' || rerun=='Y');
    
 return 0;
}