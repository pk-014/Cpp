#include<iostream>
using namespace std;
int main()
{
       
    char rerun;

do
{
	
    system("Color 70");
    int num1,num2,root,count,j,i,sum=0;
    cout<<"Enter Number1: ";cin>>num1;
    cout<<"Enter Number2: ";cin>>num2;
for ( i = num1; i <= num2; i++)
{
    count=0;
    for ( j = 1; j <= i; j++)
    {
        root=i%j;
        if (root==0)
        {
            count++;
        }   
    }
    if (count==2)
     {

        sum=sum+i;
     }
}
cout<<"Sum Of Prime Numbers Between "<<num1<<" and "<<num2<<" is: "<<sum;

cout<<endl;
std::cout<<"\n\t\t\t\tWant to Run Program again?\n\t\t\t\t=>\'y\' for YES \t =>\'n\' for NO\n\t\t\t\t\t";
std::cin>>rerun;

system("CLS");
}while (rerun=='y' || rerun=='Y');

 return 0;
}