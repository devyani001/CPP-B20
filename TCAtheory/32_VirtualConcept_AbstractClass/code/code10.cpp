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
	// object dynamically create kele ahe mhnun output
	Base *P = new Derived();
	delete P;

	return 0;


	/*
		output :
		--------
		Base Constructor
		Derived Constructor
		Base Destructor


		--> P Derived la point krto ani delete P kelyavr Derived cha object delete krel, ani P cha type Base ahe
			mhnun base cha Destructor call hoil

		--> pn tumhala child pkt base chi memory free nhi krayachi child chi pn kraychi mg virtual keyword liha base destructor smor
		
	*/

}