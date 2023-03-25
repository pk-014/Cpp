#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int rev,d=0,n=0,b_num;
	cout<<"Enter Binary: ";cin>>b_num;
	for (int i=b_num; i!=0; i=i/10)
	{
		rev=i%10;
		d=d+(rev*pow(2,n));
		n=n+1;
	}
	cout<<d;

  return 0;}
