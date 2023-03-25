#include<iostream>
using namespace std;
int main()
{
    int rows=6;
    // cout<<"Enter Rows: ";cin>>rows;
    for (int i = 1; i <=rows; i++)
    {
        // For Columns
        for (int j = 1; j <=rows; j++)
        {
            if (j<=i)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
 return 0;
}