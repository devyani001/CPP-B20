// first look pgm code1_4.cpp

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
		int hours;

	public :
		TempStaff() : Person()
		{
			cout << "Default Constructor : TempStaff class" << endl;
		}

		TempStaff(int id, string name, int rate, int hours) : Person(id, name), rate(rate), hours(hours)
		{
			cout << "Parameterized Constructor : TempStaff class" << endl;
		}

		void display()
		{
			Person :: display();

			cout << "Rate  : Rs. " << rate << endl;
			cout << "Hours : Rs. " << hours << endl;
			cout << "Amount : " << (rate*hours) << endl;
		}

};

int main()
{
	TempStaff tob(101,"AAA",100,15);	// tob [id:G  name:G] Garbage
	tob.display();

	return 0;
}



/*

	OUTPUT :
	---------
	Parameterized Constructor : Person class
	Parameterized Constructor : TempStaff class
	Person   ID : 101
	Person Name : AAA
	Rate  : Rs. 100
	Hours : Rs. 15
	Amount : 1500


	--> Person pob; will give error if u don't call empty constructor 
		Empty constructor must be called in derived class...	
	--> TempStaff() : Person()
		{
			cout << "Default Constructor : TempStaff class" << endl;
		}
		ithe person() lihavch lagte Rule ahe. output with person() and without same ch yet.
	--> TempStaff tob(101,"AAA",100,15); object madhe value pass krtana 4 kravya lagtil
		ya 4 value pass krayla constructor ksa lihal



	NOTE :
	-------
	--> for using 'string', include #include <string> header file




*/