// Example-1 : Container class
// ----------------------------
#include <iostream>
using namespace std;

class B
{
	public :
		void show()
		{
			cout << "i am in show" << endl;
		}
};

class A
{
	public :

		B obb;		

		void display()
		{
			cout << "i am in diaplay" << endl;
		}

		// class A mdhe kon kon ahe - class B, display, class B cha object obb;
};

int main()
{
	A ob;
	ob.display();
	ob.obb.show();

	B tob;
	tob.show();		// container class madhe B cha object create krun function call kru skto

	return 0;
}

/*
	output :
	--------
	i am in diaplay
	i am in show
	i am in show

*/