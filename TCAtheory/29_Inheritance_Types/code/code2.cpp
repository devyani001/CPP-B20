// SINGLE INHERITANCE

#include <iostream>
using namespace std;

// Parent class or Base Class , java -> Super class
class A
{
	public:
		void display()
		{
			cout << "I am in Display() function" << endl;
		}
};

// child class or derived class , java -> sub class
class B : public A
{
	public :
		void show()
		{
			cout << "I am in Show() function" << endl;
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