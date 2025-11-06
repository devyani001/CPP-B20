#include <iostream>
#include <string>
using namespace std;

class Person
{
	private :
		int id;
		string name;

	public :
		Person(int id, string name) : id(id), name(name)
		{
			cout << "Constructor : Person class" << endl;
		}

		void display()
		{
			cout << "Person   ID : " << id << endl;
			cout << "Person Name : " << name << endl;
		}

};

int main()
{

	Person pob(101,"Sachin");	// pob [id:101  name:Sachin]
	pob.display();
	return 0;
}



/*

	OUTPUT :




	NOTE :
	-------
	--> for using 'string' include #include <string> header file




*/