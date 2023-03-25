#include<iostream>
using namespace std;
int main()
{
 char rerun;
do
{
    std::system("Color 70");
    int trows,row,num,k,l;
    cout<<"Enter the number of rows: ";cin>>trows;

    for ( row = 1; row <=trows; row++)
    {
        for ( num = 1;num <= trows; num++)
        {
            if (num<=row)
            {
                cout<<num;
            }
            else{
                cout<<" ";
            }
        }
        for ( num=trows; num>=1; num--)
            {
                if (num<=row)
                {
                    cout<<num;
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