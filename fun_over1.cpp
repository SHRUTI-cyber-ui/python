#include <iostream>
using namespace std;
class dada{
    public:
    void Add(int x,int y)
    {
        cout<<"Addtion is "<<x+y<<endl<<endl;
    }
};

class papa: public dada{
    public:
    void Add(int x,int y)
    {
        
        
        cout<<"Multi is "<<x*y<<endl<<endl;
    }
};

class beti: public papa {
    public:
    void Add(int x,int y)
    {
        
        
         cout<<" beti div is "<<float(x) / float(y)<<endl;
    }
};



int main()
{
    //Function Overriding
    beti obj;
    obj.Add(12,12);

}
