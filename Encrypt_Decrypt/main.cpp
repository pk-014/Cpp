#include<iostream>
#include<string>
#include<cstdlib>
#include<time.h>
#include<conio.h>
using namespace std;
void encrypto();
void decrypto();
int len,key,act;
string message;
int main()
{
       srand(time(0));
char rerun;
do
{
system("Color 0A");
cout<<"\n\n\t\t=>Programming Fundamentals"<<endl;
cout<<"\n\t\t=>Presented By: Muhammad Asad"<<endl;
cout<<"\n\t\t=>Roll No. : BSF2201587"<<endl<<endl;
cout<<endl;
cout<<"\tType Your Message:  ";
std::getline(cin>>ws,message);
len=message.length();
cout<<"\n\t\t1.Encrypt\t\t2.Decrypt"<<endl<<"\t\t";cin>>act;
switch (act)
{
case 1:
cout<<"\t\t";
    for (int j = 0; j < 70; j++)
    {
        cout<<"-";
    }
    cout<<endl;
    encrypto();
    cout<<"\t\t";
    for (int j = 0; j < 70; j++)
    {
        cout<<"-";
    }
    cout<<endl;
    break;
case 2:
cout<<"\t\t";
for (int j = 0; j < 70; j++)
    {
        cout<<"-";
    }
    cout<<endl;
    decrypto();
    cout<<"\t\t";
for (int j = 0; j < 70; j++)
    {
        cout<<"-";
    }
    cout<<endl;
    break;
default:
cout<<"\t\t";
for (int j = 0; j < 70; j++)
    {
        cout<<"-";
    }
    cout<<endl;
    cout<<"\n\t\t\t\t\tEnter a valid command";
    cout<<"\n\n\t\t";
    for (int j = 0; j < 70; j++)
    {
        cout<<"-";
    }
    cout<<endl;
    break;
}
cout<<endl<<"\tWant to Run Program again?(y/n)=>  ";
cin>>rerun;
system("CLS");
}while (rerun!='n');
}

void encrypto(){
    key=rand()%1200;
    cout<<"\n\t\t\t\tYour Encrypted message is: ";
    for (int i = 0; i !=len; i++)
    {
        char enc=message[i];
        char ch=enc+key;
        cout<<ch;
    }
    cout<<endl<<"\t\t\t\tKey For Decryption: "<<key<<endl<<endl;
}
void decrypto(){
    cout<<endl<<"\t\t\t\tEnter Decryption Key: ";cin>>key;
    cout<<"\n\n\t\t\t\tDecrypted Message: ";
    for (int i = 0; i !=len; i++)
    {
        char dec=message[i];
        char ch=dec-key;
        cout<<ch;
    }
    cout<<endl<<endl;
}

 
