// Example-1 : Nested class
// -------------------------
#include <iostream>
using namespace std;

class A
{
	public :

		class B
		{
			public :
				void show()
				{
					cout << "i am in show" << endl;
				}
		};

		void display()
		{
			cout << "i am in diaplay" << endl;
			B obb;
			obb.show();	
		}
};

int main()
{
	A ob;
	ob.display();

	return 0;
}

/*
	output :
	--------
	i am in diaplay
	i am in show

*/