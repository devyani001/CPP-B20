#include <iostream>
using namespace std;

int sqr(int x)
{
	int a;
	a = x * x;
	return a;
}

int main()
{
	int num = 2;
	int ans;

	ans = sqr(num);
	cout << "square : " << ans << endl;

	return 0;

}