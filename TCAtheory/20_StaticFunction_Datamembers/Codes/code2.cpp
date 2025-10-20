#include <iostream>
using namespace std;

class A
{
	int i;				
	static int s;

	public :
	static void show()
	{
		cout << "Value of s : " << s << endl;
	}
};

int A::s=99;
// static data member class chya baher declare krayche

int main()
{
	A ob1;
	ob1.show();
	A::show();

	return 0;
}


/*

Q. Non-static member la memory kuthe ani kdhi milte
----------------------------------------------------
--> int A::s = 99;	Static data member
--> int s = 99;		Global variable

*/