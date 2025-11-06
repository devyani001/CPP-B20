// look pgm code1_3.cpp after this pgm

#include <iostream>
#include <string>
using namespace std;

class Person
{
	private :
		int id;
		string name;

	public :

		Person()
		{
			cout << "Default Constructor : Person class " << endl;
		}

		Person(int id, string name) : id(id), name(name)
		{
			cout << "Parameterized Constructor : Person class" << endl;
		}

		void set_data()
		{
			cout << "Enter the Person id : " << endl;
			cin  >> id;
			cout << "Enter the Person name : " << endl;
			cin  >> name;
		}

		void display()
		{
			cout << "Person   ID : " << id << endl;
			cout << "Person Name : " << name << endl;
		}

};

class TempStaff : public Person
{
	private :
		int rate;
		double hours;

	public :
		TempStaff() : Person()
		{
			cout << "Default Constructor : TempStaff class" << endl;
		}

};

int main()
{
	TempStaff tob;	// pob [id:G  name:G] Garbage
	return 0;
}



/*

	OUTPUT :
	---------
	Default Constructor : Person class
	Default Constructor : TempStaff class

	--> Person pob; will give error if u don't call empty constructor 
		Empty constructor must be called in derived class...	



	NOTE :
	-------
	--> for using 'string', include #include <string> header file




*/