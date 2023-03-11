// Adding every digits of input number
#include<iostream>
using namespace std;
int main()
{
	int num,rev,sum=0;
	cout<<"Enter number: ";
	cin>>num;
	cout<<endl;
	for(num;num!=0;num=num/10){
		rev=num%10;
		sum=sum+rev;
	}
		cout<<sum;


	return 0; 
}