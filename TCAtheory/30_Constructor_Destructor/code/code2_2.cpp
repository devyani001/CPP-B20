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

class C : public A, public B
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
		Default Constructor : A
		Default Constructor : B
		Default Constructor : C
		Destructor : C
		Destructor : B
		Destructor : A
	*/

	return 0;
}