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
	// dynamically creating an object of base class with Derived() cha constructor, but display is virtual there so,
	// it will block that function and go to derived class

	Base *P = new Derived();
	P->display();

	return 0;
}






/*
OUTPUT :
---------
	Derived : Display 

	--> Jar ashi khi situation ali ki Base class cha pointer derived class chya object la jr point krt asel tr,
		base display call n hota child cha call zal pahije, mhnun virtual concept picture madhe ala

*/
