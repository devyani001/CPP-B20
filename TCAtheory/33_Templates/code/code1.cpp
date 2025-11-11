#include <iostream>
using namespace std;

void change(int &x,int &y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

int main()
{
	int a=2,b=3;
	cout << "Before swap  A : " << a << "	B : " << b << endl;
	change(a,b);
	cout << "After  swap  A : " << a << "	B : " << b << endl;

	return 0;
}

/*
	case-1
	-------
	void change(int x,int y)
	output :
	Before swap  A : 2      B : 3
	After  swap  A : 3      B : 2

	case-2
	-------
	void change(int x,int y)
	output :
	Before swap  A : 2      B : 3
	After  swap  A : 2      B : 3
	--> it doesn't swap the number, value of passing reference variable

*/


