// code tr samech ahe pn class addition pkt int chi addition krto ani float sathi prt new class bnvava lagel so use template class

#include <iostream>
using namespace std;

template<class T>
class addition
{
	T a,b,ans;
	
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
			cout << "-------------------------" << endl;
		}

};

int main()
{
	addition<int> ob;	// ob [a:3  b:5  ans:]
	ob.accept();
	ob.calculate();
	ob.display();

	addition<float> ob2;	// ob [a:3  b:5  ans:]
	ob2.accept();
	ob2.calculate();
	ob2.display();

	return 0;
}