#include <iostream>
using namespace std;

class Base
{
	public :
		Base()
		{
			cout << "Base Constructor" << endl;
		}

		~ Base()
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
	Derived ob;		// object dynamically create kele ahe

	// Derived *P = new Derived();

	return 0;

}


/*

	output : (constructor calling sequence)
	----------------------------------------
		Base Constructor
		Derived Constructor
		Derived Destructor
		Base Destructor


*/