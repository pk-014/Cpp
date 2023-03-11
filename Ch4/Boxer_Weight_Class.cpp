// Boxer weight class
#include<iostream>
using namespace std;
int main()
{
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
    
 return 0;
}