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

class B : public A
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


int main()
{
	B ob;
	/*
		output :
		---------
		Default Constructor : A
		Default Constructor : B
		Destructor : B
		Destructor : A
	*/

	return 0;
}


/*
	object chi memory free zali ki destructor call hoto simultaneously...
	main() ch execution samplyavr destructor call hoto...
	like a local varable function samplayvr local variable chi memory clear hote...


	NOTE :
	-------
	1. Constructor calling sequence
	- pahile parent cha constructor run hoto nantr child cha.

	2. Destructor calling sequence
	- opposite ahe, pahile child cha desturctor call hoto nantr parent cha.

	Example :
	----------
	Multilevel : A --> B --> C
	----------------------------
	C ob;
	ans : A constr
		  B constr
		  C constr
		  C destr
		  B destr
		  A destr


	Multiple Inheritance : 2 parent , 1 child
	------------------------------------------
	class A
	{
	
	};

	class B
	{
	
	};

	class C : public A, public B
	{
	
	};

	C ob;

	--> constructor calling sequence left to right asto
		class C : ----> public A, public B
		first constructor of A ll be called after that B

	Ans : Constr A
		  Cosstr B
		  Constr C
		  Destr  C
		  Destr  B
		  Destr  A

	class C : public B, public A
	{
	
	};

	Ans : Constr B
		  Cosstr A
		  Constr C
		  Destr  C
		  Destr  A
		  Destr  B

*/