#include <iostream>
using namespace std;

template<class T>
void change(T &x,T &y)
{
	T t;
	t = x;
	x = y;
	y = t;
}

int main()
{
	int a=2,b=3;
	cout << "Before swap  A : " << a << "	B : " << b << endl;
	change<int>(a,b);
	cout << "After  swap  A : " << a << "	B : " << b << endl;

	float p=10.4, q=9.8;
	cout << "Before swap  P : " << p << "	Q : " << q << endl;
	change<float>(p,q);
	cout << "After  swap  P : " << p << "	Q : " << q << endl;

	char ch1='#', ch2='$';
	cout << "Before swap  ch1 : " << ch1 << "	ch2 : " << ch2 << endl;
	change<char>(ch1,ch2);
	cout << "After  swap  ch1 : " << ch1 << "	ch2 : " << ch2 << endl;

	return 0;
}

/*

	output :
	---------
	Before swap  A : 2      B : 3
	After  swap  A : 3      B : 2
	Before swap  P : 10.4   Q : 9.8
	After  swap  P : 9.8    Q : 10.4
	Before swap  ch1 : #    ch2 : $
	After  swap  ch1 : $    ch2 : #

*/