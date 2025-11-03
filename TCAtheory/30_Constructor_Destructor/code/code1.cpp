#include <iostream>
using namespace std;

class A
{
	public :
	A()
	{
		cout << "Default Constructor : A " << endl;
	}

	~A()
	{
		cout << "Destructor : A " << endl;
	}
};

int main()
{
	A ob;

	return 0;
}


/*
	object chi memory free zali ki destructor call hoto simultaneously...
	main() ch execution samplyavr destructor call hoto...
	like a local varable function samplayvr local variable chi memory clear hote...
*/