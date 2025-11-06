// PermStaff

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

		void set_data()
		{
			Person :: set_data();

			cout << "what is the rater per hour : " << endl;
			cin  >> rate;
			cout << "How many Hours you Worked : " << endl;
			cin  >> hours;
		}

		void display()
		{
			Person :: display();

			cout << "Rate  : Rs. " << rate << endl;
			cout << "Hours : Rs. " << hours << endl;
			cout << "Amount : " << (rate*hours) << endl;
			cout << "-------------------------" << endl;
		}

};

class PermStaff : public Person
{
	private :
		float salary;

	public :
		// default constructor
		// parameterized constructor
		// set_data()
		// display()
		// Please Complete This code

		PermStaff() : Person()
		{
			cout << "Default Constructor : PermStaff class" << endl;
		}

		PermStaff(int id, string name, int salary) : Person(id, name), salary(salary)
		{
			cout << "Parameterized Constructor : PermStaff class" << endl;
		}

		void set_data()
		{
			Person :: set_data();

			cout << "enter the salary : " << endl;
			cin  >> salary;
		}

		void display()
		{
			Person :: display();

			cout << "Salary : " << salary << endl;
			cout << "-------------------------" << endl;
		}

};


int main()
{
	cout << "TempStaff data : " << endl;

	TempStaff tob1;	// tob [id:G  name:G] Garbage
	tob1.set_data();
	
	TempStaff tob2(102,"BBB",50,7);

	tob1.display();
	tob2.display();

	cout << "--------------------------" << endl;
	cout << "PermStaff data : " << endl;

	PermStaff pob1;
	pob1.set_data();

	PermStaff pob2(222,"QQQ", 10000);

	pob1.display();
	pob2.display();

	return 0;
}



/*

	OUTPUT :
	---------
	TempStaff data :
	Default Constructor : Person class
	Default Constructor : TempStaff class
	Enter the Person id :
	101
	Enter the Person name :
	AAA
	what is the rater per hour :
	100
	How many Hours you Worked :
	15
	Parameterized Constructor : Person class
	Parameterized Constructor : TempStaff class
	Person   ID : 101
	Person Name : AAA
	Rate  : Rs. 100
	Hours : Rs. 15
	Amount : 1500
	-------------------------
	Person   ID : 102
	Person Name : BBB
	Rate  : Rs. 50
	Hours : Rs. 7
	Amount : 350
	-------------------------
	--------------------------
	PermStaff data :
	Default Constructor : Person class
	Default Constructor : PermStaff class
	Enter the Person id :
	111
	Enter the Person name :
	PPP
	enter the salary :
	10000
	Parameterized Constructor : Person class
	Parameterized Constructor : PermStaff class
	Person   ID : 111
	Person Name : PPP
	Salary : 10000
	-------------------------
	Person   ID : 222
	Person Name : QQQ
	Salary : 10000
	-------------------------



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