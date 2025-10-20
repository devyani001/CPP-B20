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
			roll = 101;
			name = "AAA";
			per  = 77.00;
			cout << "Empty / Default Constructor !!" << endl;
		}

		// Parameterized Constructor
		Student (int troll, string tname, float tper)
		{
			roll = troll;
			name = tname;
			per  = tper;
			cout << "Paremeterized Constructor !!" << endl;
		}

		// Copy Constructor
		Student (Student &t)
		{
			roll = t.roll;
			name = t.name;
			per  = t.per;
			cout << "Copy Constructor !!" << endl << endl; 
		}

		// Student (Student &t)
		// {
		// 	roll = t.roll;
		// 	name = t.name;
		// 	per  = t.per;
		// 	cout << "Copy Constructor !!" << endl << endl; 
		// }

		void display()
		{
			cout << "Roll No :    " << roll << endl;
			cout << "Name    :    " << name << endl;
			cout << "percentage : " << per  << endl;
			cout << "---------------------" << endl;
		}

};

int main()
{

	Student S1;
	Student S2(102,"BBB",95.69);
	Student S3 = S1;
	Student S4(S2);

	S1.display();
	S2.display();
	S3.display();
	S4.display();

	return 0;
}