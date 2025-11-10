#include <iostream>
using namespace std;

class Base
{
	public :
		Base()
		{
			cout << "Base Constructor" << endl;
		}

		virtual ~ Base()
		{
			cout << "Base Destructor" << endl;
		}
};

class Derived : public Base
{
	public :
		Derived()
		{
			cout << "Derived Constructor" << endl;
		}

		~ Derived()
		{
			cout << "Derived Destructor" << endl;
		}
};

int main()
{
	// object dynamically create kele ahe mhnun output
	Base *P = new Base();
	delete P;

	return 0;


	/*
		output :
		--------
		Base Constructor
		Base Destructor
		
	*/

}