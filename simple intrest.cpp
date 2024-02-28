#include<iostream>
using namespace std;

int main()
{
    int principleAmount,rate ,t;
    float interest , total;
    cout<<"Enter Principal Amount" ;
    cin>>principleAmount;
    
    cout<<"Enter Rate" ;
    cin>>rate;
    
    cout<<"Enter Time" ;
    cin>>t;
    
    interest=principleAmount*rate*t/100;
    
    total=principleAmount+interest;
    
    cout<<"Interest  = "<<interest;
    cout<<"Total Amount = "<<total;
    
    
    return 0;
}