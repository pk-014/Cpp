// Determine whether a point lies inside the circle or outside
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long double rad,h,k,x,y,dis;
    cout<<"Enter Center Of Circle"<<endl<<"h= ";cin>>h;cout<<"k= ";cin>>k;
    cout<<"Enter Radius Of Circle: ";cin>>rad;
    cout<<"Enter Point"<<endl<<"x= ";cin>>x;cout<<"y= ";cin>>y;
    dis=pow((x-h),2)+pow((y-k),2);
    dis=sqrt(dis);
    if (dis>rad)
    {
        cout<<"Outside";
    }
    else if (dis==rad)
    {
        cout<<"Lies on circle";
    }
    else{
        cout<<"inside";
    }
    
    
 return 0;
}