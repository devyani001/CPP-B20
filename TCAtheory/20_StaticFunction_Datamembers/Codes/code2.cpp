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
// static data member class chya baher declare/initialize krayche

int main()
{
	A ob1;
	ob1.show();
	A::show();

	return 0;
}


/*

Doubt
------
Q. difference between declaring and initializing


Q. Non-static member la memory kuthe ani kdhi milte
----------------------------------------------------
--> int A::s = 99;	Static data member
--> int s = 99;		Global variable


	--> 'i' la memory kdhi milel - object banlyavr
	--> 's' la memory kdhi milel - pgm ram mdhe load krtanach memory milel ani free hoil pgm teminate krtana

*/