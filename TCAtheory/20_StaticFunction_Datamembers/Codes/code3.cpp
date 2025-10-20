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

	static void show()
	{
		cout << "No. of object created : " << s << endl;
	}
};

int A::s=0;
// static data member class chya baher declare/initialize krayche

int main()
{
	A ob1;
	A ob2(5);
	A ob3(15);

	A::show();

	return 0;
}

