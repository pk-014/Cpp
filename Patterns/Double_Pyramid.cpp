#include<iostream>
using namespace std;
int main()
{
    int rows,i,j,k,l;
    cout<<"How many rows you want?";cin>>rows;
    for ( i = rows; i >= 1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    cout<<endl;
    for (k= 1; k <= rows; k++)
    {
        for ( l = 1; l<=k; l++)
        {
            cout<<l;
        }
        cout<<endl;
        
    }
    
 return 0;
}