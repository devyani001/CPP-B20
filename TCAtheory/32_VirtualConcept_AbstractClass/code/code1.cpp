#include <iostream>
using namespace std;

void fun()
{
	cout << "AUS" << endl;		
}

void fun(int i)
{
	cout << "I am TCA" << endl;		
}

int main()
{
	// can call function directly don't need to use class.
	fun();
	fun(11);

	// kuthla fun call kraych he decision jr runtime la hot asel tr called Run Time Polymorphism otherwise Compile Time Polymorphism

	return 0;
}