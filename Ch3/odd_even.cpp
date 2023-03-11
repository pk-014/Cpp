// Even or Odd
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number:";cin>>num;
    // in case of even
    if(num%2==0){
        cout<<num<<" is Even";
    }
    else{
        cout<<num<<" is Odd";
    }
 return 0;
}