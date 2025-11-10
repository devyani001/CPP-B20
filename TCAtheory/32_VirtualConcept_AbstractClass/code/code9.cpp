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

/*int main()
{
	// object dynamically create kele ahe mhnun output
	Derived *P = new Derived();

	return 0;


	/*
		output :
		--------
		Base Constructor
		Derived Constructor

	*

}*/

int main()
{
	// object dynamically create kele ahe mhnun output
	Derived *P = new Derived();
	delete P;

	return 0;


	/*
		output :
		--------
		Base Constructor
		Derived Constructor
		Derived Destructor
		Base Destructor


		--> ithe pkt *P chi memory free zali ahe, object dynamically bnlele ahe tyachi memory free krayachi asel,
			delete P; krav lagel tevha destructor call hoil
		--> Derived *P = new Derived(); ha object new krun bnvla mhnje ha heap vr bnlela ahe
		
	*/

}