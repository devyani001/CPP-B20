#include <iostream>
using namespace std;

class add{

	private :
		int a,b,ans;

	public :
		void set_data(){
			cout << "enter first value :" << endl;
			cin >> a;

			cout << "enter second value :" << endl;
			cin >> b;
		}

		void calculate(){
			ans = a + b;
		}

		void get_data(){
			cout << "addition of " << a << "and " << b << "is " << ans << endl;
		}
	
};


int main(){

		add obj;
		add obj2;
 		
		obj.set_data();
		obj.calculate();
		obj.get_data();

		cout << "----------------" << endl;
		
		obj2.set_data();
		obj2.calculate();
		obj2.get_data();
		
	return 0;

}