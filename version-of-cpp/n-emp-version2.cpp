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
	Employee S[10];

	int tno;
	string tname;
	float tsalary;
	string tcity;
	int n;
	int i;

	cout << "enter no of emp : " << endl;
	cin >> n;

	for(i=0;i<n;i++)
	{
		
		cout << "enter emp id : ";
		cin >> tno;
		S[i].set_eno(tno);

		cin.get();
		cout << "enter emp name : ";
		getline(cin,tname);
		S[i].set_ename(tname);

		cout << "enter emp salary : ";
		cin >> tsalary;
		S[i].set_salary(tsalary);

		cin.get();
		cout << "enter emp city : ";
		getline(cin,tcity);
		S[i].set_city(tcity);

		cout << "-------------------------------" << endl;
	}

	cout << "result " << endl;
	cout << "===================================" << endl;

	for(i=0;i<n;i++){
		cout << "Employee id : " << S[i].get_eno() << endl;
		cout << "Employee name : " << S[i].get_ename() << endl;
		cout << "Employee salary : " << S[i].get_salary() << endl;
		cout << "Employee city : " << S[i].get_city() << endl;
		cout << "-------------------------------" << endl;
	}

	
	

	return 0;

}