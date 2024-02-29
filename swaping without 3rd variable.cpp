#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    
    cout<<"Enter first Number ";
    cin>>num1;
    
    cout<<"Enter second Number ";
    cin>>num2;
    
    cout<<"before swaping \n";
    
    cout<<num1;
    cout<<num2;
    
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
    cout<<"\nAfter Swaping ";
   
    cout<<"\nfirst Number "<<num1;
    cout<<"\nSeconf Number "<<num2;
    
    return 0;
}