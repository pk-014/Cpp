// which character you entered
#include<iostream>
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
    char c;
    cout<<"Enter a Character: ";cin>>c;
    int b=int(c);
    if (b>=65 && b<=90)
    {
        cout<<"You Entered a Capital Letter";
    }
    else if (b>=97 && b<=122)
    {
        cout<<"You Entered a Small Letter";
    }
    else if (b>=48 && b<=57)
    {
        cout<<"You Entered a Decimal";
    }
    else if ((b>=0 && b<=47) || (b>=58 && b<=54) || (b>=91 && b<=96) || (b>=123 && b<=127) )
    {
        cout<<"You Entered a Special Character";
    }
    

std::cout<<"\nWant to Re-Run the Program?\n\f\'y\' for YES \t\t \'n\' for NO\n";
std::cin>>rerun;
std::system("CLS");
}while (rerun=='y' || rerun=='Y');
 return 0;
}