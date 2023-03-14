#include<iostream>
using namespace std;
int main()
{
    
    char rerun;

do
{
    system("Color 70");
	cout<<"\n\t=>Programming Fundamentals"<<endl;
	cout<<"\t=>Presented By: Muhammad Asad"<<endl;
	cout<<"\t=>Roll No. : BSF2201587"<<endl<<endl;
    int a=1;
    char alphabet='z';
    // Creating Rows=4
    for (int i = 1; i <=4; i++)
    {


        // Spaces
        for (int j = 3; j >=i; j--)
        {
            std::cout<<"  ";
        }



        // Printing Alphabets

        char temp_alphabet=alphabet;
        
        for (int k = 1; k <= a; k++)
        {
            std::cout<<temp_alphabet++<<" ";
        }
        
        for (int l = i*2; l <= 7; l++)
        {
            if (l%2!=0)
            {
                alphabet=alphabet-l;
                break;
            }
        }
        a=a+2;       
        std::cout<<endl;
    }
std::cout<<"\nWant to Re-Run the Program?\n\f\'y\' for YES \t\t \'n\' for NO\n";
std::cin>>rerun;
system("CLS");
}while (rerun=='y' || rerun=='Y');

 return 0;
}