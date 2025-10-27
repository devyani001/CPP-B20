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

	Student S[5];

	return 0;

}