#include <iostream>
using namespace std;

class Shape
{
	public :
	
	virtual void Area() = 0;
	// pkt define kela ahe pn yacha code lihaychi jababdari kona vr aste tyachya child vr...
	// ex : vadilanche swapna purn mulga krt asto

	virtual void display() = 0;
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
	Shape *P = new Circle(2.5);
	P->Area();
	P->display();		// define kra base cls madhe will give correct output

	return 0;
}


/*
	output :
	---------
		Area of Circle : 19.625

*/