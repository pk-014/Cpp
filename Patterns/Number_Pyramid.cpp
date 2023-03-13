#include<iostream>
using namespace std;
int main()
{
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
    
return 0;
}