#include <iostream>
using namespace std;

class A
{
	int i;				
	static int s;

	public :

	A(int i=0)
	{
		this-> i = i;
		s++;
	}

	void display()
	{
		cout << "Value of i : " << i << endl;
		cout << "Value of s : " << s << endl;
		cout << "------------------" << endl;
	}

	static void show()
	{
		// cout << "Value of i : " << i << endl;
		cout << "No. of object created : " << s << endl;
	}

	// non-static method madhe 's' print kela ahe yes it is allowed but printing non-static data member in static method is not allowed
	// object ch nhi bnvla mg 'i' ksa print hoil error yeil.
};

int A::s=0;
// static data member class chya baher declare/initialize krayche

int main()
{

	A ob;
	ob.display();
	A ob2;
	ob2.display();

	A::show();

	return 0;
}