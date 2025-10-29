#include <iostream>
using namespace std;

class ABC
{
	
	int i;
	float f;

	public :

	// declaring both defalut and parameterized constructor at the same time. 
	ABC(int x=0, float y=0)
	{
		i = x;
		f = y;
	}

	ABC operator +(ABC &S)
	{
		ABC temp;
		temp.i = i + S.i;
		temp.f = f + S.f;

		// i konacha hae = ob1
		// f konacha hae = ob2		coz 'S' is another name of what 'ob2';

		return temp;
	}

	void display()
	{
		cout << "Value of i : " << i << endl;
		cout << "Value of f : " << f << endl;
		cout << "------------------" << endl;
	}

};

int main()
{
	ABC ob1(2,3.5);
	ABC ob2(4,7.9);

	ABC ob3;

	ob3 = ob1 + ob2;

	// ob1 --> caller object
	ob1.display();
	ob2.display();
	ob3.display();

	return 0;
}