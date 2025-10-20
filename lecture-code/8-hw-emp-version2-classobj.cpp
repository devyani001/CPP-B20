#include <iostream>
using namespace std;

class Employee {

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

		void set_city(string cit){
			city = cit;
		}
		
		string get_city(){
			return city;
		}

};

int main(){

	Employee S;
	
	S.set_eno(101);
	cout << "Employee No : " << S.get_eno() << endl;

	S.set_ename("Ragita");
	cout << "Employee Name : " << S.get_ename() << endl;

	S.set_salary(1000);
	cout << "Employee Salary : " << S.get_salary() << endl;

	S.set_city("Madras");
	cout << "Emplyee city : " << S.get_city() << endl;

	return 0;

}