// Profit or Loss
#include<iostream>
using namespace std;
int main()
{
    int sp,cp,profit,loss;
    cout<<"Enter Cost Price:";cin>>cp;
    cout<<"Enter Selling Price:";cin>>sp;
    // in case of profit
    if(cp<sp){
        profit=sp-cp;
        cout<<"You've made profit of: "<<profit;
    }
    else{
        loss=cp-sp;
        cout<<"You've made Loss of: "<<loss;
    }
 return 0;
}