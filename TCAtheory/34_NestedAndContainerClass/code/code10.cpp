#include <iostream>
using namespace std;

namespace X
{
	int i = 99;	
	void display()
	{
		cout << "India will win" << endl;
	}
}

namespace Y
{
	float i = 3.4;
	void display()
	{
		cout << "NZ will win" << endl;
	}
}

int main()
{
	cout << "Hello World" << endl;

	cout << "Value of integer i : " << X::i << endl;	// compiler kuthla gheil i so (code8.cpp)
	cout << "Value of float   i : " << Y::i << endl;

	X::display();
	Y::display();

	return 0;
}

/*
	output :
	---------
	Hello World
	Value of integer i : 99
	Value of float   i : 3.4
*/