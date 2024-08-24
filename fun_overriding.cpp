#include <iostream>
using namespace std;
class Maruti{
    public:
    void car()
    {
        cout<<"Maruti Car"<<endl;
    }
};
class TATA: public Maruti{
    public:
    void car()
    {
        cout<<"TATA Car"<<endl;
    }
};
class Tazan: public TATA{
    public:
    void car()
    {
        cout<<"Tarzan Car"<<endl;
    }
};


int main()
{
    //Function Overriding
Tazan obj1;
obj1.car();

}

