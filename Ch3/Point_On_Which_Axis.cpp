// Point lies on which axis
#include<iostream>
using namespace std;
int main()
{
    long double x,y;
    cout<<"Enter the Point"<<endl<<"x= ";cin>>x;cout<<"y= ";cin>>y;
    if (x==0 && y==0)
    {
        cout<<"Point Lies on the Origin";
    }
    else if (x==0 && y!=0)
    {
        cout<<"Point Lies on y-axis";
    }
    else if (y==0 && x!=0)
    {
        cout<<"Point Lies on x-axis";
    }
    else{
        cout<<"Point Lies Between x-axis and y-axis";
    }
    
    
 return 0;
}