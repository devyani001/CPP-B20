#include <iostream>
using namespace std;

class Student
{
	private :
		int roll;
		string name;
		float per;

	public :

		Student() : roll(101), name("BrainHub Edits"), per(91.80)
		{
			cout << "Empty / Default Constructor !! " << endl;
		}

		Student(int troll, string tname, float tper) : roll(troll), name(tname), per(tper)
		{
			cout << "Parameterized Constructor !! " << endl;
		}

		Student(Student &t) : roll(t.roll), name(t.name), per(t.per)
		{
			cout << "Copy Constructor !! " << endl;
		}


		void display()
		{
			cout << "Roll No    : " << roll << endl;
			cout << "Name is    : " << name << endl;
			cout << "Percentage : " << per  << endl;
			cout << "---------------------" << endl; 
		}


		~Student()
		{
			cout << "I am dying ... " << endl;
		}


};

int main()
{
	Student S1;
	Student S2(105,"devil Choudhari",95.69);
	Student S3 = S2;
	Student S4(S1);

	S1.display();
	S2.display();
	S3.display();
	S4.display();

	return 0;

}