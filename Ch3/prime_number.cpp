// Day On 1st jan
#include<iostream>
using namespace std;
int main()
{
   int num,root,count=0;
   cout<<"Enter Num";cin>>num;
    for(root=num;root>=1;root--){
        if(num%root==0){
            count++;
        }
    }
    if(count==2){
    	cout<<"Root: "<<count<<endl;
        cout<<"prime";
    }
    else{
    	cout<<"Root: "<<count<<endl;
        cout<<"not prime";
    }
    
 return 0;
}
