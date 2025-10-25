#include <iostream>
using namespace std;

class A
{
	private :
		int i;

	public :
		A(int x = 0)
		{
			i = x;
		}

	friend void show(A &tob);
	friend int main();
};

void show(A &tob)	// tob - object name temparory object dil
{
	cout << "In show I : " << tob.i << endl;
	// will give error to resolve this 'friend function' is introduced.
	tob.i = 0;
	// data change pn kru skto jo private declare kela hota vrti. direct access hoto na rahili security ani khi.
	// mhnun cpp ithe mage padu rahila. ani dusrya lang ha function use krt nhi.
}

int main()
{
	A ob(11);	// i:11
	show(ob);
	cout << "In main I : " << ob.i << endl;
	

	return 0;

}

/*
	--> To achieve data hiding
	--> To achieve encapsulation
	--> To achieve security
	--> To achieve data Abstraction
	we use 'PRIVATE' keyword

	pn ithe using 'FRIEND FUNCTION' apn private data member la access kru skto.
	mhnun CPP la 'PURE OBJECT ORIENTED PROGRAMMING' mhtl jat 'NAHI'.

	--> mg friend function concept ka ala, there is a concept called 'OPERATOR OVERLOADING' ji bina friend function chi houch skt nhi.
	--> friend function can be declared in anywhere inside class. irrespective of public or private.

	1)
	------------
	void show(A &tob)	// tob - object name temparory object dil
	{
		cout << "Value of I : " << tob.i << endl;
		// will give error to resolve this 'friend function' is introduced.
	}

	give error but u can overcome this by
	--> 
	Class A
	{
		friend void show(A &tob);
		// jyat function liht ahe to function bghaycha kuthla ahe --> show()
		// tyala class madhe jaun as a 'FRIEND' declare karaycha bss;
	}

	2)
	------------
	int main()
	{
		A ob(11);	// i:11
		cout << "In main() I : " << ob.i << endl;
		show(ob);

		return 0;
	}

	give error but u can overcome this by
	--> 
	Class A
	{
		friend int main();
		// jyat cout liht ahe to function bghaycha kuthla ahe --> main()
		// tyala class madhe jaun as a 'FRIEND' declare karaycha bss;
	}

*/