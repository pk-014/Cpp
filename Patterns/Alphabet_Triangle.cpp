#include<iostream>
#include <unistd.h>

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
    int a=1,rows;
    char alphabet='z';
    cout<<"Enter Number Of Rows: ";cin>>rows;
    // Creating Rows=4
    
    for (int i = 1; i <=rows; i++)
    {
    	cout<<"\t\t\t\t\t";


        // Spaces
        for (int j = rows-1; j >=i; j--)
        {
			usleep(300000);
            std::cout<<"  ";
        }



        // Printing Alphabets

        char temp_alphabet=alphabet;
        
        for (int k = 1; k <= a; k++)
        {
        	usleep(300000);
            std::cout<<temp_alphabet++<<" ";
        }
        
        for (int l = i*2; l <= 9; l++)
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
cout<<endl<<"\t\t\t";
for(int m=1;m<=45;m++){
	cout<<"=";
}
cout<<endl;
std::cout<<"\n\t\t\t\tWant to Run Program again?\n\t\t\t\t=>\'y\' for YES \t =>\'n\' for NO\n\t\t\t\t\t";
std::cin>>rerun;

system("CLS");
}while (rerun=='y' || rerun=='Y');

 return 0;
}
