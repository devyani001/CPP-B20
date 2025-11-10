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


int main()
{

	Base *P;
	Base ob;

	P = &ob;
	P->display();

	return 0;
}