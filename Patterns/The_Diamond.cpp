#include<iostream>
using namespace std;
int main()
{
 char rerun;
do
{
    std::system("Color 70");
    int i,j,a=1,rows;
    cout<<"How many rows you want?";cin>>rows;
    for ( i = 1; i <=rows; i++)
    {
        // Spaces
        for ( j = rows; j >=i ; j--)
        {
            cout<<" ";
        }
        // Numbers
        for (int k = 1; k<=a; k++)
        {
            cout<<k;
        }
        a=a+2;
        cout<<endl;
    }
    

std::cout<<"\nWant to Re-Run the Program?\n\f\'y\' for YES \t\t \'n\' for NO\n";
std::cin>>rerun;
std::system("CLS");
}while (rerun=='y' || rerun=='Y');
 return 0;
}