#include <iostream>
using namespace std;

class A
{
	int x;
	public :
	A(int a)
	{	
		x = a;
		cout << "Default Constructor : A " << endl;
	}

	void display()
	{
		cout << "Value of X : " << x << endl; 
	}

	~A()
	{
		cout << "Destructor : A " << endl;
	}
};


int main()
{
	A ob(11);		// [ob : 11]
	ob.display();
	return 0;
}

/*
	Output :
	---------
	Default Constructor : A
	Value of X : 11
	Destructor : A

*/