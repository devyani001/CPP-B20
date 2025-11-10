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
			cout << "Child : Display" << endl;
		}
};


int main()
{
	Derived *P;
	Derived ob;

	P = &ob;
	P->display();

	return 0;
}