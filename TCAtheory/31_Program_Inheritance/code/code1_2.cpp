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

int main()
{
	Person pob;	// pob [id:G  name:G] Garbage
	pob.set_data();
	pob.display();

	return 0;
}



/*

	OUTPUT :
	---------
	--> Person pob; will give error if u don't call empty constructor 	

	Default Constructor : Person class
	Enter the Person id :
	111
	Enter the Person name :
	ppp
	Person   ID : 111
	Person Name : ppp



	NOTE :
	-------
	--> for using 'string', include #include <string> header file




*/