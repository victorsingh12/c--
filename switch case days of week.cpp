#include <iostream>
using namespace std;
int main()
{
    int num;
    
    cout<<"Enter NUmber  1 to 7 for name of week days ";
    cin>>num;
    
    switch (num)
    {
        case 1 :
        cout<<"Monday";
        break;
        
        case 2:
        cout<<"Tuesday";
        break;
        
        case 3:
        cout<<"Wednesday";
        break;
        
        case 4:
        cout<<"Thrusday";
        break;
        
        case 5:
        cout<<"Friday";
        break;
        
        case 6:
        cout<<"Saturday";
        break;
        
        case 7:
        cout<<"Sunday";
        break;
        
        default:
        cout<<"invalid Input ";
    }

    return 0;
}
