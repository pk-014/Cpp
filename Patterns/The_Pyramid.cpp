#include<iostream>
using namespace std;
int main()
{
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
    
 return 0;
}