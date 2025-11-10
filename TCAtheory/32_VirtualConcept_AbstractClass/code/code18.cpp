#include <iostream>
using namespace std;

class Shape
{
	public :
	
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

class Square : public Shape
{
	double side;
	public :

		Square(double s)
		{
			side = s;
		}

		void Area()
		{
			cout << "Area of Square : " << (side * side) << endl;
		}
};

int main()
{
	Shape *P = new Circle(2.5);
	P->Area();

	P = new Square(5.0);
	P->Area();

	return 0;
}


/*
	output :
	---------
		Area of Circle : 19.625
		Area of Square : 25


	--> ekch pointer bnvla pn kunala point krto to Circle chya object la pn ani Square chya pn,
		jyachi grj ahe tevha tyala call krel


		USE
		----
		menu driven
		1. Circle
		2. square

		choice
		1) 
			Shape *P = new Circle(2.5);
			P->Area();

		2) 
			P = new Square(5.0);
			P->Area();
*/

// pal harbal movie - japan america war