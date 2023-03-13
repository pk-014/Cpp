#include<iostream>
using namespace std;
int main()
{
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
    


    
 return 0;
}