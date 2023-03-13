#include<iostream>
using namespace std;
int main()
{
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
    
 return 0;
}