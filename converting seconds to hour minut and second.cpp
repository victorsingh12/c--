#include<iostream>
using namespace std;
int main()
{
    int seconds,hour,minut,second;
    
    cout<<"Enter Seocnds ";
    cin>>seconds;
    
    hour=(seconds/3600);
    minut=seconds/60;
    second=(seconds-(3600*hour)-(minut*60));
    
    cout<<"\nHour = "<<hour;
    cout<<"\nMinut ="<<minut;
    cout<<"\nSeconds ="<<second;
 
    return 0;   
}