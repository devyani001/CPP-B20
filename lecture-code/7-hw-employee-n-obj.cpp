#include <iostream>
using namespace std;

class Employee{

	private :
		int eno;
		string ename;
		float salary;
		string city;

	public :
		void set_data(){

			cout << "enter employee no : " << endl;
			cin >> eno;

			cin.get();

			cout << "enter employee name : " << endl;
			getline(cin,ename);

			cout << "enter employee salary : " << endl;
			cin >> salary;
			
			cin.get();

			cout << "enter employee city : " << endl;
			getline(cin,city);

		}
 
		void get_data(){
		
			cout << "employee no : " << eno << endl;
			cout << "employee name : " << ename << endl;
			cout << "employee salary : " << salary << endl;
			cout << "employee city : " << city << endl; 
			cout << "--------------------------------------" << endl;		
	
		}

};

int main(){

	Employee S[100];

	int n;
	int i;

	cout << "how many employees : " << endl;
	cin >> n;

	for(i=0;i<n;i++){
		S[i].set_data();
	}

	cout << "employee information : " << endl;
	cout << "------------------------------" << endl;

	for(i=0;i<n;i++){
		S[i].get_data();
	}

	return 0;

}