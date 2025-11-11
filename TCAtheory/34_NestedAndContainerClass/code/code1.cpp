#include <iostream>
using namespace std;

class A
{
	public :
		void display()
		{
			cout << "i am in diaplay" << endl;	
		}

		class B
		{
			public :
				void show()
				{
					cout << "i am in show" << endl;
				}
		};
};

int main()
{

	A ob;
	ob.display();

	B obb;			// error - so declare object of B in class A's display() method
	obb.show();		// error

	return 0;
}