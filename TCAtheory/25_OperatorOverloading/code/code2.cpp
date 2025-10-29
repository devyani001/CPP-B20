#include <iostream>
using namespace std;

class A
{
	
	int i;
	float f;

	public :
	// declaring both defalut and parameterized constructor at the same time. 
	A(int x=0; float y=0)
	{
		i = x;
		f = y;
	}

};

int main()
{
	A ob1(2,3.5);
	A ob2(4,7.9);

	A ob3;

	ob3 = ob1 + ob2;	// ERROR yeil coz compiler does not know '+' operator.

	return 0;
}