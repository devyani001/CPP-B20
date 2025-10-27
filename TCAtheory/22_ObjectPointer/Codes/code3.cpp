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

};

int main()
{

	Student ob;
	ob.display();

	Student ob2(101,"AAA",60.0);
	ob2.display();

	Student *P = &ob2;
	
	// cout << *P->roll;	// ERROR - roll declared private
	// cout << ob.roll;		// ERROR - roll declared private

	// *P->display();		// ERROR - don't use * (operator) here
	P->display();

	// print using .(dot) operator
	// kiti complicated ahe lihayla mhnun ->(arrow operator) introduce kela
	// priority .(dot) chi jaast aste
	(*P).display();			// *P - object cha data

	return 0;
}