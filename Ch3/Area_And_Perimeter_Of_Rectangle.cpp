// Area And Perimeter Of Rectangle
#include<iostream>
using namespace std;
int main()
{
    int rlen,rbre,ra,rp;
    cout<<"Enter Lenght of Rectangle: ";cin>>rlen;
    cout<<"Enter Breadth of Rectangle: ";cin>>rbre;
    ra=rlen*rbre;
    rp=2*(rlen+rbre);
    if (ra>rp)
    {
        cout<<"Area: "<<ra<<" Perimeter: "<<rp<<endl;
        cout<<"Area of Ractangle is Greater than it's Perimeter.";
    }
    else if (ra==rp)
    {
        cout<<"Area: "<<ra<<" Perimeter: "<<rp<<endl;
        cout<<"Area of Ractangle is Equal to it's Perimeter.";
    }
    else{
        cout<<"Area: "<<ra<<" Perimeter: "<<rp<<endl;
        cout<<"Perimeter of Ractangle is Greater than it's Area.";
    }
    
 return 0;
}