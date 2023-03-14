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
    int rows,i,j,k,l;
    cout<<"How many rows you want?";cin>>rows;
    for ( i = 1; i <=rows; i++)
    {
        for (j = 1; j<=i; j++)
        {
            cout<<j;
        }
        
    cout<<endl;
    }

    for ( k = rows; k>1; k--)
    {
        for ( l=1; l<k ; l++)
        {
                  cout<<l;

        }
            cout<<endl;
    }
    
    std::cout<<"\nWant to Re-Run the Program?\n\f\'y\' for YES \t\t \'n\' for NO\n";
std::cin>>rerun;
std::system("CLS");
}while (rerun=='y' || rerun=='Y');
    
 return 0;
}