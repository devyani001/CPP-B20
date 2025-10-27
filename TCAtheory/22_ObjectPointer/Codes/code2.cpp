#include <iostream>
using namespace std;

int main()
{
	
	int i  = 77;
	int *P = &i;

	cout << i  << endl;
	cout << *P << endl;

	*P = 88;

	cout << i << endl;
	cout << *P << endl;

	return 0;

}