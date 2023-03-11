// Finding the type of triangle
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long double s1,s2,s3;
    cout<<"Enter First Side:";cin>>s1;
    cout<<"Enter Second Side:";cin>>s2;
    cout<<"Enter Third Side:";cin>>s3;
    if (s1==s2 && s2==s3)
    {
        cout<<"Equilateral";
    }
    else if (s1==s2 || s2==s3 || s3==s1)
    {
        cout<<"Isosceles";
    }
    else if ((s3*s3)==((s1*s1)+(s2*s2)))
    {
        cout<<"Right Angled";
    }
    else{
        cout<<"Scalene";
    }

    
    
    
 return 0;
}