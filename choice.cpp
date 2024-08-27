#include <iostream>
using namespace std;

int main()
{
   int a,b,c,ch;
    cout<<"Enter value of a and b";
    cin>>a>>b;

cout<<"Enter 1 for [+]"<<endl;

cout<<"Enter 2 for [-]"<<endl;
cout<<"Enter 3 for [*]"<<endl;
cout<<"Enter 4 for [/]"<<endl;

cout<<"Enter yout choice : "<<endl;
cin>>ch;

switch(ch)
   {
       case 1:{
           cout<<a+b;
           break;
        }
        case 2:{
           cout<<a-b;
           break;
        }
        case 3:{
          cout<<a*b;
          break;
        }
        case 4:{
           cout<<a/b;
           break;
        }
        default:{
           cout<<"Wrong Input";
           break;
        }
    }


}

