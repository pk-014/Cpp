// Finding the type of triangle
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 char rerun;
do
{
    std::system("Color 70");
	std::cout<<"\n\t=>Programming Fundamentals"<<endl;
	std::cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	std::cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
    long double s1,s2,s3;
    cout<<"Enter First Side:";cin>>s1;
    cout<<"Enter Second Side:";cin>>s2;
    cout<<"Enter Third Side:";cin>>s3;
    if (s1==s2 && s2==s3)
    {
        cout<<"Equilateral";
    }
    else if (s1==s2 || s2==s3 || s3==s1)
    {
        cout<<"Isosceles";
    }
    else if ((s3*s3)==((s1*s1)+(s2*s2)))
    {
        cout<<"Right Angled";
    }
    else{
        cout<<"Scalene";
    }

    
    
std::cout<<"\nWant to Re-Run the Program?\n\f\'y\' for YES \t\t \'n\' for NO\n";
std::cin>>rerun;
std::system("CLS");
}while (rerun=='y' || rerun=='Y');
    
 return 0;
}