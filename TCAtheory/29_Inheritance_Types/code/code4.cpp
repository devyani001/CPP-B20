// MULTIPLE INHERITANCE

#include <iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout << "I am in Display() function" << endl;
		}
};

class B
{
	public :
		void show()
		{
			cout << "I am in Show() function" << endl;
		}
};

class C : public A, public B
{
	public :
		void makePayment()
		{
			cout << "Making Payment .." << endl;
		}
};


int main()
{
	C ob;
	ob.show();
	ob.display();
	ob.makePayment();

	return 0;
}