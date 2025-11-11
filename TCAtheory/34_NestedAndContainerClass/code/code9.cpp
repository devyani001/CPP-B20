// method2

#include <iostream>
using namespace std;
namespace X
{
	int i = 99;	
}

namespace Y
{
	float i = 3.4;
}

int main()
{
	using namespace X;
	cout << "Hello World" << endl;

	cout << "Value of integer i : " << i << endl;	// compiler kuthla gheil i so (code8.cpp)
	cout << "Value of float   i : " << Y::i << endl;

	return 0;
}

/*
	output :
	---------
	Hello World
	Value of integer i : 99
	Value of float   i : 3.4
*/