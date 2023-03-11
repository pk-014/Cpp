// Day On 1st jan
#include<iostream>
using namespace std;
int main()
{
   int year,ad,day;
   cout<<"Enter Year: 20";cin>>year;
//    for leap year
   if(year%4==0){
    ad=(year*0.25)-1;
    year=year+ad;
    day=year%7;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 0:
        cout<<"Sunday";
        break;
    default:
        break;
    }
   }
    else{
        ad=year*0.25;
        year=year+ad;
        day=year%7;
        switch (day)
        {
            case 1:
            cout<<"Monday";
            break;
            case 2:
            cout<<"Tuesday";
            break;
            case 3:
            cout<<"Wednesday";
            break;
            case 4:
            cout<<"Thursday";
            break;
            case 5:
            cout<<"Friday";
            break;
            case 6:
            cout<<"Saturday";
            break;
            case 0:
            cout<<"Sunday";
            break;
            default:
            break;
    }
    }
 return 0;
}