#include <iostream>
using namespace std;

int roll = 555;

class Student
{
	private :
		int roll;
		string name;
		float per;

	public :

		Student()
		{
			roll = 0;
			name = "N/A";			// N/A --> Not Applicable ...
			per  = 0;
			// Empty / Default Constructor !!
		}

		Student(int roll, string name, float per)
		{
			this->roll = roll;
			this->name = name;
			this->per  = per;
			// Parameterized Constructor !!
		}

		void display()
		{
			int roll = 999;

			cout << "Global Roll : " << ::roll 	   << endl;
			cout << "Local Roll  : " << roll 	   << endl;
			cout << "Roll        : " << this->roll << endl;
			cout << "name        : " << name 	   << endl;
			cout << "per         : " << per    	   << endl;
			cout << "----------------------------" << endl;
		}


};

int main()
{

	Student ob1;
	ob1.display();

	Student ob2(101,"AAA",60);
	ob2.display();


	return 0;
}