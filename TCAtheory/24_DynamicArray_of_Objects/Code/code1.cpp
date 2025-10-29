// Dynamically Creating an Array

#include <iostream>
using namespace std;

int main()
{

	int n;
	int *P;

	cout << "How many Numbers you want to store : ";
	cin  >> n;

	P = new int[n];

	for(int i=0; i<n; i++)
	{
		cout << "Enter the Data : ";
		cin  >> P[i];
	}

	cout << "Content of an Array : " << endl;

	for(int i=0; i<n; i++)
	{
		cout << P[i] << endl;
	}

	delete []P;

	return 0;

}