// RGB to CMYK
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r,g,b,c,m,y,k,max,white;
    cout<<"Enter the value of \'R\': ";cin>>r;
    cout<<"Enter the value of \'G\': ";cin>>g;
    cout<<"Enter the value of \'B\': ";cin>>b;
    if (r==0 && g==0 && b==0)
    {
        c=0;m=0;y=0;k=1;
    }
    else{
        r=r/255;
        g=g/255;
        b=b/255;
        max=r;
        if (g>max)
        {
            max=g;
        }
        else if (b>max)
        {
            max=b;
        }
        white=max;
        k=1-white;
        c=(white-r)/white;
        m=(white-g)/white;
        y=(white-b)/white;

        
    }
    cout<<"CMYK("<<c<<","<<m<<","<<y<<","<<k<<")";
 return 0;
}