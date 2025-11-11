#include <iostream>
using namespace std;

class addition
{
	int a,b,ans;
	
	public :
		void accept()
		{
			cout << "Enter the firsr Number : " << a << endl;
			cin >> a;
			cout << "Enter the second Number : " << b << endl;
			cin >> b;
		}

		void calculate()
		{
			ans = a+b;
		}

		void display()
		{
			cout << "First Number  : " << a   << endl;
			cout << "Second Number : " << b   << endl;
			cout << "Sum 		   : " << ans << endl;
		}

};

int main()
{
	addition ob;	// ob [a:3  b:5  ans:]
	ob.accept();

	ob.calculate();

	ob.display();

	return 0;
}