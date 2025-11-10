//Jar Base/Parent class cha pointer child class chya object la point krt asel tarach virtual keyword cha effect disto.

#include <iostream>
using namespace std;

class Base
{
	public :
		void display()
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
	Base *P;
	Derived ob;			// ob[ P  C  display display]

	P = &ob;			// base class cha pointer can point to derived class object
	P->display();

	return 0;
}




/*
OUTPUT :
---------
*/