// Grade of steel
#include<iostream>
using namespace std;
int main()
{
    long double hn,cc,ts;
    cout<<"Enter the Hardness of steel: ";cin>>hn;
    cout<<"Enter the Carbon Content of steel: ";cin>>cc;
    cout<<"Enter the Tensile Strength of steel: ";cin>>ts;
    if (hn>50 && cc<0.7 && ts>5600)
    {
        cout<<"Grade=10";
    }
    else if (hn>50 && cc<0.7)
    {
        cout<<"Grade=9";
    }
    else if (cc<0.7 && ts>5600)
    {
        cout<<"Grade=8";
    }
    else if (hn>50 && ts>5600)
    {
        cout<<"Grade=7";
    }
    else if (hn>50 || cc<0.7 || ts>5600)
    {
        cout<<"Grade=6";
    }
    else if (!(hn>50 && cc<0.7 && ts>5600))
    {
        cout<<"Grade=5";
    }

 return 0;
}