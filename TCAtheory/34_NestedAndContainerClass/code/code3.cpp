// Example-1 : Nested class - another way of creating object
// ----------------------------------------------------------
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
		}obb;

		void display()
		{
			cout << "i am in diaplay" << endl;
		}

		// class A mdhe kon kon ahe - 
};

int main()
{
	A ob;
	ob.display();
	ob.obb.show();

	return 0;
}

/*
	output :
	--------
	i am in diaplay
	i am in show

*/