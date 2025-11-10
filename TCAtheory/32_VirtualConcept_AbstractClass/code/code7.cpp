//Jar Base/Parent class cha pointer child class chya object la point krt asel tarach virtual keyword cha effect disto.

#include <iostream>
using namespace std;

class Base
{
	public :
		virtual void display()
		{
			cout << "Base : Display" << endl;
		}
};

class Derived : public Base
{
	public :
		void display()
		{
			cout << "Derived : Display" << endl;
		}
};


int main()
{
	// dynamically creating an object of base class , with Base() constructor

	Base *P = new Base();
	P->display();

	return 0;
}






/*
OUTPUT :
---------
	Base : Display

	--> Jar ashi khi situation ali ki Base class cha pointer derived class chya object la jr point krt asel tr,
		base display call n hota child cha call zal pahije, mhnun virtual concept picture madhe ala

*/
