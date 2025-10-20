#include <iostream>
using namespace std;

class Student 
{
	private : 
		int srno;
		string sname;
		float sper;

	public : 

		Student()
		{
			srno = 101;
			cout << "Empty/Default Constructor !!" << endl;
		}

		Student(int roll)
		{
			srno = roll;
			cout << "Parameterized Constructor !!" << endl;
		}

		Student(Student &t)
		{	
			srno = t.srno;
			cout << "Copy Constructor !!" << endl;
		}

		void display()
		{
			cout << "Roll No : " << srno << endl;
			cout << "------------------" << endl;
		}

};

int main(){

	Student S1;
	Student S2(102);
	
	// 2 way of writing copy constructor 

	// way-1

	// Student S3 = S1;
	
	// way-2

	Student S3(S1);

	// S2.Student(101);				can't write like this --> wrong output
	S1.display();
	S2.display();
	S3.display();
	
	return 0;

}