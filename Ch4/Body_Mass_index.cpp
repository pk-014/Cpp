// Body mass index
#include<iostream>
using namespace std;
int main()
{
 char rerun;
do
{
    std::system("Color 70");

    long double weight,height,bmi;
    cout<<"Enter Your Weight (in Kilograms): ";cin>>weight;
    cout<<"Enter Your Height (in Meters): ";cin>>height;
    bmi=weight/(height*height);
    if (bmi<15)
    {
        cout<<"Starvation";
    }
    else if (bmi>=15.1 && bmi<=17.5)
    {
        cout<<"Anorexic";
    }
    else if (bmi>=17.6 && bmi<=18.5)
    {
        cout<<"Underweight";
    }
    else if (bmi>=18.6 && bmi<=24.9)
    {
        cout<<"Ideal";
    }
    else if (bmi>=25 && bmi<=29.9)
    {
        cout<<"Overerweight";
    }
    else if (bmi>=30 && bmi<=39.9)
    {
        cout<<"Obese";
    }
    else if (bmi>=40)
    {
        cout<<"Morbidly Obese";
    }

std::cout<<"\nWant to Re-Run the Program?\n\f\'y\' for YES \t\t \'n\' for NO\n";
std::cin>>rerun;
std::system("CLS");
}while (rerun=='y' || rerun=='Y');
 return 0;
}
