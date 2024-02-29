#include<iostream>
using namespace std;

int main()
{
    int num1,num2,sum,sub,multi,division;
    float rem;
    
    cout<<"Enter First Number ";
    cin>>num1;
    
    cout<<"Enter Seocnd Number ";
    cin>>num2;
    
    sum=num1+num2;
    sub=num1-num2;
    multi=num1*num2;
    division=num1/num2;
    rem=num1%num2;
    
    cout<<"Sum of Two Number = "<<sum;
    cout<<"\nDiffrence between Two Number = "<<sub;
    cout<<"\nMultiplation of Two Number = "<<multi;
    cout<<"\ndivision of Two Number = "<<division;
    cout<<"\nRemender of Two Number = "<<rem;

    
    
}