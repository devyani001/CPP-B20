#include <iostream>
using namespace std;

void add(int &x, int &y){

	int answer;
	answer = x + y;
	cout << "using reference variable." << endl;
	cout << "Addition is : " << answer << endl;

}

int main(){
	
	int a,b,ans;
	cout << "enter a :" << endl;
	cin >> a;

	cout << "enter b :" << endl;
	cin >> b;

	add(a,b);
	

	return 0;
	
}