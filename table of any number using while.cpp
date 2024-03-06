#include<iostream>
using namespace std;
int main()
{
     int num,i=1,multi;
     
     cout<<"Enter table Number ";
     cin>>num;
     
     while(i<=10){
         multi=num*i;
         cout<<num << "*" << i <<"=" <<multi<<endl;
         i++;
     }
    return 0;
    
}