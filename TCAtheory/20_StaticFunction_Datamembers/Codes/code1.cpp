#include <iostream>
using namespace std;

class A
{
	int i;

	public :
	A(int i = 0)
	{
		this->i = i;
	}

	void display()
	{
		cout << "i : " << i << endl;
	}

};

int main()
{
	A ob;
	// A.ob();	 // by default it will call default constructor
	A.ob(5); // by default it will call parameterized constructor
	ob.display();

	return 0;
}