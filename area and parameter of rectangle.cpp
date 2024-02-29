#include<iostream>
using namespace std;
int main()
{
    float length,width;
    float area,paramter;
    
    cout<<"Enter length";
    cin>>length;
    
    cout<<"Enter Width";
    cin>>width;
    
    area=length*width;
    paramter=2*(length+width);
    
    cout<<"Area of Rectangle"<<area;
    cout<<"\n Paramter of Rectangle"<<paramter;
    
    return 0;
}