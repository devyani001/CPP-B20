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

	Student *P = new Student();
	Student *Q = new Student(101,"AAA",60);

	P->display();
	Q->display();

	delete P;
	delete Q;		// free the memory of object. object chi memory free zali by default 'destructor' is called.

	return 0;
}