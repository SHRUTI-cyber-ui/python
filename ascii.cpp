#include <iostream>
using namespace std;

int main()
{
    char ch ;
    cout<<"Enter your Alphabate: ";
    cin>>ch;
    
    switch(ch)
    {
        case 'A':{
            cout<<"Ascii is : "<<int(ch);
            break;
        }
        case 'B':{
            cout<<"Ascii is : "<<int(ch);
            break;
        }
        case 'C':{
            cout<<"Ascii is : "<<int(ch);
            break;
        }
        default:{
            cout<<"Ascii is not here ---- ";
            break;
        }
    }
    
    
}

