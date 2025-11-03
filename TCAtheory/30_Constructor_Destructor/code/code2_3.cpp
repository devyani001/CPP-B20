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

class B
{
	public :
	B()
	{
		cout << "Default Constructor : B " << endl;
	}

	~B()
	{
		cout << "Destructor : B " << endl;
	}
};

class C : public B, public A
{
	public :
	C()
	{
		cout << "Default Constructor : C " << endl;
	}

	~C()
	{
		cout << "Destructor : C " << endl;
	}
};



int main()
{
	C ob;
	/*
		output :
		---------
		Default Constructor : B
		Default Constructor : A
		Default Constructor : C
		Destructor : C
		Destructor : A
		Destructor : B
	*/

	return 0;
}