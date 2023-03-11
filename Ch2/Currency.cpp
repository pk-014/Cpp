// currency system
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,n1,n2,n3,n4,n5,n6,note100,note50,note10,note5,note2,note1,rem;
    n1=1;n2=2;n3=5,n4=10;n5=50;n6=100;
    cout<<"Enter Amount: ";
    cin>>num;cout<<endl<<"Amount:"<<num;
    // for Rs.100 notes
    note100=num/n6;cout<<endl<<note100<<" x Rs.100";
    // remaining money
    rem=num%n6;
    // for Rs.50 notes
    note50=rem/n5;cout<<endl<<note50<<" x Rs.50";
    // remaining money
    rem=rem%n5;
    // for Rs.10 notes
    note10=rem/n4;cout<<endl<<note10<<" x Rs.10";
    // remaining money
    rem=rem%n4;
    // for Rs.5 notes
    note5=rem/n3;cout<<endl<<note5<<" x Rs.5";
    // remaining money
    rem=rem%n3;
    // for Rs.2 notes
    note2=rem/n2;cout<<endl<<note2<<" x Rs.2";
    // remaining money
    rem=rem%n2;
    // for Rs.5 notes
    note1=rem/n1;cout<<endl<<note1<<" x Rs.1";
    // remaining money
    rem=rem%n1;
 	return 0; 
}