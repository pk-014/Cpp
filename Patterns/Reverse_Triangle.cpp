#include<iostream>
using namespace std;
int main()
{
char rerun;
do
{
system("Color 70");
cout<<"\t\t\t=>Programming Fundamentals"<<endl;
cout<<"\t\t\t=>Presented By: Muhammad Asad"<<endl;
cout<<"\t\t\t=>Roll No. : BSF2201587"<<endl<<endl;
cout<<endl;
int rows;
cout<<"Enter Number Of Rows: ";cin>>rows;
int t_rows=rows;
char ch='z';
for (int i = 1; i <=rows; i++)
{
    // spaces
    if(i>=2){
        for (int j = 1; j<=i-1; j++)
        {
            cout<<" ";
        }
    }
    // stars
    for (int s = t_rows; s >= 1; s--)
    {
        cout<<ch--;
    }
    t_rows--;

    cout<<endl;
}
std::cout<<"\t\t\tWant to Run Program again?\n\t\t\t=>\'y\' for YES  \n\t\t\t=>\'n\' for NO\n\t\t\t";
std::cin>>rerun;
system("CLS");
}while (rerun=='y' || rerun=='Y');
 return 0;
}