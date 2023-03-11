#include<iostream>
using namespace std;
int main()
{
    int num,rev;
    cout<<"Enter Number: ";cin>>num;
    for(num;num!=0;num=num/10)
    {
        rev=num%10;
        cout<<rev;
    }
 return 0;
}