#include <iostream>
using namespace std;

class Book
{
	private :
		int id;
		string name;
		string author;
		float price;

	public :
		// Empty / Default Constructor
		Book()
		{
			id     = 101;
			name   = "BrainHub";
			author = "Devyani Choudhari";
			price  = 1000;
			cout << "Empty / Default Constructor !!" << endl;
		}

		// Parameterized Constructor
		Book(int tid,string tname,string tauthor,float tprice)
		{
			id     = tid;
			name   = tname;
			author = tauthor;
			price  = tprice;
			cout << "Parameterized Constructor !!" << endl;
		}

		// Copy constructor
		Book(Book &t)
		{
			id     = t.id;
			name   = t.name;
			author = t.name;
			price  = t.price;
			cout << "Copy Constructor !!" << endl;
		}

		void display()
		{
			cout << "Book Id    : " << id << endl;
			cout << "Book Name  : " << name << endl;
			cout << "Autor Name : " << author << endl;
			cout << "Book Price : " << price << endl;
			cout << "----------------------" << endl;
		}
};

int main()
{
	Book B1;
	Book B2(102,"MindHub","anant Choudhari",2000);
	Book B3 = B2;
	Book B4(B1);

	cout<<endl;

	B1.display();
	B2.display();
	B3.display();
	B4.display();

	return 0;

}