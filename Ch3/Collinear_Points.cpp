// collinear points
#include<iostream>
using namespace std;
int main()
{
    long double x1,x2,x3,y1,y2,y3,s1,s2,s3;
    cout<<"Enter First Point"<<endl<<"x= ";cin>>x1;cout<<"y= ";cin>>y1;
    cout<<"Enter Second Point"<<endl<<"x= ";cin>>x2;cout<<"y= ";cin>>y2;
    cout<<"Enter Third Point"<<endl<<"x= ";cin>>x3;cout<<"y= ";cin>>y3;
    // Slope Of 1st & 2nd Points
    s1=(y2-y1)/(x2-x1);
    // Slope Of 2nd & 3rd Points
    s2=(y3-y2)/(x3-x2);
    // Slope Of 3rd & 1st Points
    s3=(y1-y3)/(x1-x3);
    if(s1==s2 && s1==s3 && s3==s2){
        cout<<"Points Are Collinear";
    }
    else{
        cout<<"Points Are Not Collinear";
    }

 return 0;
}