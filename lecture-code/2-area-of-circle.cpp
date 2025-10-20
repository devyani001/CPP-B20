#include <iostream>

using namespace std;

#define pie 3.14

int main(){

	int r;
	float area;
	
	cout << "enter radius : ";
	cin >> r;

	area = pie*r*r;

	cout << "area : " << area;

	return 0;

}