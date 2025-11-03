#include <iostream>
using namespace std;

class A
{
	private :
		int x;
	public :
	A(int a)
	{	
		x = a;
		cout << "Default Constructor : A " << endl;
	}

	void display()
	{
		cout << "Value of X : " << x << endl; 
	}

	~A()
	{
		cout << "Destructor : A " << endl;
	}
};

class B : public A
{
	int y;
	public :
	B(int a, int b) : A(a)
	{
		y = b;
		cout << "Default Constructor : B " << endl;
	}

	void display()
	{
		cout << "Value of Y : " << y << endl;
		// cout << "Value of X : " << x << endl;	// ERROR - x la ob mdhe memory milali ahe pn tumhi access kuthe krtay B madhe then what is the meaning of 'private' then. x is a private lihl nsel tri by default
		// private - bss tyach class madhe access kru skto. main() pn access nhi kru skt ani child pn nhi
		// mg x ksa bghnar 
		A::display();
		// x++;			// ERROR - coz private, operation pn kru skt nhi, kahich kru skt nhi...
	}

	~B()
	{
		cout << "Destructor : B " << endl;
	}
};

int main()
{
	B ob(11,22);		// [ob : X:11,Y:22]
	ob.display();
	return 0;
}

/*
	Output :
	---------
	Default Constructor : A
	Default Constructor : B
	Value of Y : 22
	Destructor : B
	Destructor : A

	NOTE :
	-------
	--> previous code madhe default constructor automatic call hoto A cha nantr B cha , pn ithe aplyala call krava lagto.
		11 constructor A la milto ani 22 constructor B la



*/