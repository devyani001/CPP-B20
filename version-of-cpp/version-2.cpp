/*#include <iostream>
using namespace std;

class Employee
{
	private : 
		int eno;
		string ename;
		float salary;
		string city;

	public :
		void set_eno(int no){
			eno = no;
		}

		int get_eno(){
			return eno;
		}

		// cin.get();

		void set_ename(string name){
			ename = name;
		}

		string get_ename(){
			return ename;
		}	


		void set_salary(float sal){
			salary = sal;
		}

		float get_salary(){
			return salary;
		}

		//cin.get();

		void set_city(string cit){
			city = cit;
		}

		string get_city(){
			return city;
		}
};

int main()
{
	Employee S;

	S.set_eno(1010);
	cout << "Employee id : " << S.get_eno() << endl;

	S.set_ename("AAA bbb");
	cout << "Employee name : " << S.get_ename() << endl;

	S.set_salary(5000);
	cout << "Employee salary : " << S.get_salary() << endl;

	S.set_city("Wardha");
	cout << "Employee city : " << S.get_city() << endl;

	return 0;

}*/


#include <iostream>
using namespace std;

class Employee
{
	private : 
		int eno;
		string ename;
		float salary;
		string city;

	public :
		void set_eno(int no){
			eno = no;
		}

		int get_eno(){
			return eno;
		}

		// cin.get();

		void set_ename(string name){
			ename = name;
		}

		string get_ename(){
			return ename;
		}	


		void set_salary(float sal){
			salary = sal;
		}

		float get_salary(){
			return salary;
		}

		//cin.get();

		void set_city(string cit){
			city = cit;
		}

		string get_city(){
			return city;
		}
};

int main()
{
	Employee S;

	int tno;
	string tname;
	float tsalary;
	string tcity;

	cout << "enter emp no : " << endl;
	cin >> tno;
	S.set_eno(tno);

	cin.get();
	cout << "enter emp name : " << endl;
	getline(cin,tname);
	S.set_ename(tname);

	cout << "enter emp salary : " << endl;
	cin >> tsalary;
	S.set_salary(tsalary);

	cin.get();
	cout << "enter emp city : " << endl;
	getline(cin,tcity);
	S.set_city(tcity);

	
	cout << "Employee id : " << S.get_eno() << endl;
	cout << "Employee name : " << S.get_ename() << endl;
	cout << "Employee salary : " << S.get_salary() << endl;
	cout << "Employee city : " << S.get_city() << endl;

	return 0;

}