#include <iostream>
using namespace std;

class Student 
{
	private :
		int roll;
		string name;
		float per;

	public :

		// Empty/Default constructor
		Student ()
		{
			roll = 0;
			name = "N/A";
			per  = 0.0;
			cout << "Empty / Default Constructor !!" << endl;
		}

		// Parameterized Constructor
		Student (int roll, string name, float per)
		{
			this->roll = roll;
			this->name = name;
			this->per  = per;
			cout << "Paremeterized Constructor !!" << endl;
		}

		// Copy Constructor
		Student(Student &tob)
		{
			roll = tob.roll;
			name = tob.name;
			per  = tob.per;
			cout << "Copy Constructor !!" << endl;
		}
		

		void display()
		{
			cout << "Roll No :    " << roll << endl;
			cout << "Name    :    " << name << endl;
			cout << "percentage : " << per  << endl;
			cout << "---------------------" << endl;
		}

		~Student()
		{
			cout << "Student Destructor Called!" << endl;
		}

};

int main()
{

	// DYNAMIC MEMORY ALLOCATION

	Student *P = new Student();
	Student *Q = new Student(101,"AAA",60);
	Student *R = new Student( *Q );

	P->display();
	Q->display();
	R->display();

	delete P;
	delete Q;		// free the memory of object. object chi memory free zali by default 'destructor' is called.
	delete R;

	return 0;

	// P,Q,R  kuthe store honar - STACK
	// object kuthe store honer - HEAP

	// DELETE mule destructor call hoto, delete jr nhi lihla tr destructor call hot nhi ani memory free hot nhi...
	// STATIC madhe automatically memory free hote, ani automatically destructor call hoto... coz delete is used in dynamic memory allocation.


	/*
		STATIC MEMORY ALLOCATION

		Student ob1;
		Student ob2(101,"AAA",60);
		Student ob3 = ob2;

		ob1.display();
		ob2.display();
		ob3.display();
	*/

}