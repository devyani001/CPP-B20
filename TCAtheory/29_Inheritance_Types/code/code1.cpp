#include <iostream>
using namespace std;

class B
{
	public :
		void show()
		{
			cout << "I am in Show() function" << endl;
		}
};

int main()
{
	B ob;
	ob.show();

	return 0;
}