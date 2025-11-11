#include <iostream>
using namespace std;

void change(int &x,int &y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

void change(float &x,float &y)
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

	float p=10.4, q=9.8;
	cout << "Before swap  P : " << p << "	Q : " << q << endl;
	change(p,q);
	cout << "After  swap  P : " << p << "	Q : " << q << endl;


	return 0;
}

/*

	output :
	---------


*/


