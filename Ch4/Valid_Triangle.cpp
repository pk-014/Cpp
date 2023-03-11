// Valid Triangle
#include<iostream>
using namespace std;
int main()
{
    long double s1,s2,s3;
    cout<<"Enter First side of Triangle: ";cin>>s1;
    cout<<"Enter Second side of Triangle: ";cin>>s2;
    cout<<"Enter Third side of Triangle: ";cin>>s3;
    if (s1>=s2)
    {
        if (s1>=s3)
        {
            // s1 is greatest
            if ((s2+s3)>s1)
            {
                cout<<"Triangle is valid";
            }
            else{
                cout<<"Triangle Not Valid";
            }
            
        }
        else{
            // s3 is greatest
             if ((s2+s1)>s3)
            {
                cout<<"Triangle is valid";
            }
            
            else{
                cout<<"Triangle Not Valid";
            }
        }
        
    }
    // s2>=s1
    else{
        if(s2>=s3){
            // s2 is greatest
             if ((s1+s3)>s2)
            {
                cout<<"Triangle is valid";
            }
            
            else{
                cout<<"Triangle Not Valid";
            }
        }
        else{
            // s3 is greatest
             if ((s1+s2)>s3)
            {
                cout<<"Triangle is valid";
            }
            
            else{
                cout<<"Triangle Not Valid";
            }
        }
    }
    
 return 0;
}