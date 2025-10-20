#include <iostream>
using namespace std;

class Overloading
{
	public : 

		void display()
		{
			cout << "I am display with no parameter. " << endl;
		}

		void display(int i)
		{
			cout << "I am display with integer parameter : " << i << endl;
		}

		void display(float f)
		{
			cout <<"I am display with float parameter    : " << f << endl;
		}

		void display(double d)
		{
			cout << "I am display with double parameter  : " << d << endl;
		}

		void display(int i, double d)
		{
			cout << "I am display with int & double parameter : " << i << " and " << d << endl;
		}

		void display(double d, int i)
		{
			cout << "I am display with double & int parameter : " << d << " and " << i << endl;
		}

};

int main()
{

	Overloading ob;

	ob.display();
	ob.display(5);
	ob.display(5.5f);
	ob.display(5.5);
	ob.display(1.1,1);
	ob.display(1,1.1);

	return 0;

}