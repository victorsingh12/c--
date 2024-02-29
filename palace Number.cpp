#include<iostream>
using namespace std;
int main()
{
    int num;
    
    cout<<"Enter Number ";
    cin>>num;
    
    if(num>0 &&num<=9){
        cout<<("In Ones");
    }
    else if(num>=10&&num<100){
        cout<<"in tens";
        
    }
    else if(num>=100&&num<=999){
        cout<<"In hundreds";
    }
    else if(num>=999){
        cout<<("In Thousand  ");
    }
    else {
        cout<<"Enter Positive Number ";
    }
    return 0;
}