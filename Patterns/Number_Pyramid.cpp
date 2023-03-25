#include<iostream>
using namespace std;
int main()
{
     char rerun;
do
{
    std::system("Color 70");
    int rows,i,j;
    cout<<"How many rows you want?";cin>>rows;
    for ( i = 1; i<=rows; i++)
    {
        for ( j = rows; j>=1; j--)
        {
            if (j<=i)
            {
                cout<<j;
            }
            else{
                cout<<" ";
            }
            
        }
        
        cout<<endl;
    }

std::cout<<"\nWant to Re-Run the Program?\n\f\'y\' for YES \t\t \'n\' for NO\n";
std::cin>>rerun;
std::system("CLS");
}while (rerun=='y' || rerun=='Y');
    
    
return 0;
}