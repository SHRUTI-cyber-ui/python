#include <iostream>
using namespace std;
int main()
{
	int name;
	int pass;
	cout<<"enter user name ";
	cin>>name;
	cout<<"enter password";
	cin>>pass;
	if(name=pass)
	{
	cout<<"Access Grant";
	}
	else
	{
		cout<<"Error";
	}
}
