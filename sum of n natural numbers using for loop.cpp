#include<iostream>
using namespace std;
int main()
{
     int num,sum=0;
     
     cout<<"Enter Number Limit ";
     cin>>num;
     
     for(int i=1;i<=num;++i){
         
         sum+=i;
     }cout<<"sum = "<<sum;
     
    return 0;
    
}

