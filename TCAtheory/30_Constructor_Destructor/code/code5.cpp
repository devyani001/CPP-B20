// protected keyword
// pkt child la access zala pahije baki saglyanna to inaccesible asla pahije


#include <iostream>
using namespace std;

class A
{
	protected :
		int x;
	public :
	A(int a)
	{	
		x = a;
		cout << "Default Constructor : A " << endl;
	}

	void display()
	{
		cout << "A's display Value of X : " << x << endl; 
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
		cout << "In B'display X : " << x << endl; //12
		x++;
		A::display();
		cout << "Value of Y : " << y << endl;
		// cout << "Value of X : " << x << endl;	// ERROR - x la ob mdhe memory milali ahe pn tumhi access kuthe krtay B madhe then what is the meaning of 'private' then. x is a private lihl nsel tri by default
		// protected - bss tyach class madhe access kru skto ani child , pn main() access nhi kru skt
		// mg x ksa bghnar 
		//A::display();


		/*
			ithe apn x cha data bghu skto by using 'protected' keyword.
		*/


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

	//cout << ob.x;				// yala pn error yeil. baba ni tyancha khisa tyanchya mula chya tabyat dila baher chyanchya nhi , ani ob is baherch means main() cha member.
	return 0;
}

/*
	Output :
	---------
	Default Constructor : A
	Default Constructor : B
	In B'display X : 11
	A's display Value of X : 12
	Value of Y : 22
	Destructor : B
	Destructor : A


	NOTE :
	-------
	--> previous code madhe default constructor automatic call hoto A cha nantr B cha , pn ithe aplyala call krava lagto.
		11 constructor A la milto ani 22 constructor B la



*/