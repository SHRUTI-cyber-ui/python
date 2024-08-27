#include <iostream>
using namespace std;

int main()
{
int a,b;
cout<<"Enter value of a & b: ";
cin>>a>>b;

int min = (a>b)?(b):(a);

cout<<min;

int lcm = min;


while(1)
{
    if(lcm%a==0 && lcm%b==0)
    {
        cout<<endl<<"This is LCM"<<lcm;
        break;
    }
    lcm++;
}

}

