#include <iostream>
using namespace std;

class abc{
	public:
		int x;
		abc(int a)
		{
			x=a;
		}
		void show()
		{
			cout<<"Answer is"<<x<<endl;
		}
		abc operator *(abc temp)
		{
			x = x+temp.x;
		}
		
};
int main()
{
	abc obj1(23);
	abc obj2(22);
//	abc obj(0);
//	obj = obj1 * obj2;
	
	obj1 * obj2;
	
	obj2.show();
	
}
