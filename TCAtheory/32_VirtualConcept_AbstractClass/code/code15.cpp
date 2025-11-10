#include <iostream>
using namespace std;

class Shape
{
	virtual void Area() = 0;
	// pkt define kela ahe pn yacha code lihaychi jababdari kona vr aste tyachya child vr...
	// ex : vadilanche swapna purn mulga krt asto
};

class Circle : public Shape
{
	double radius;

	public :
		Circle(double r)
		{
			radius = r;
		}

		void Area()
		{
			cout << "Area of Circle : " << (3.14 * radius * radius) << endl;
		}

		void display()
		{
			cout << "I am in display";
		}
};

int main()
{
	Circle ob(3.5);
	// ob.Shape();
	ob.Area();
	ob.display();

	return 0;
}