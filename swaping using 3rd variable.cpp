#include<iostream>
using namespace std;
int main()
{
    int num1,num2,temp;
    
    cout<<"Enter first Number ";
    cin>>num1;
    
    cout<<"Enter second Number ";
    cin>>num2;
    
    cout<<"before swaping \n";
    
    cout<<num1;
    cout<<num2;
    
    temp=num1;
    num1=num2;
    num2=temp;
    
    cout<<"\nAfter Swaping ";
   
    cout<<"\nfirst Number "<<num1;
    cout<<"\nSeconf Number "<<num2;
    
    return 0;
}