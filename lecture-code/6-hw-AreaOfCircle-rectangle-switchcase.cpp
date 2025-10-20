#include <iostream>
using namespace std;

#define PI 3.14

class AreaOfCircle{
	
	private :
		int r;
		float area;

	public :
		void set_data(){
			cout << "enter radius :" << endl;
			cin >> r; 
		}

		void calculate(){
			area = PI*r*r;
		}

		void get_data(){
			cout << "Area of Circle : " << area << endl;
		}

};

class AreaOfRectangle{

	private :
		int l,b;
		float area_rect;

	public :
		void set_data(){
			cout << "enter length : " << endl;
			cin >> l;

			cout << "enter breadth : " << endl;
			cin >> b;
		}

		void calculate(){
			area_rect = l * b;
		}

		void get_data(){
			cout << "Area of rectangle : " << area_rect << endl;
		}

};

int main(){

	int choice;

	cout << "enter choice : " << endl;
	cout << "1. Area of Circle" << endl;
	cout << "2. Area of Rectangle" << endl;
	cin  >> choice;

	switch(choice){
		case 1:
			cout << "CIRCLE" << endl;
			AreaOfCircle obj;

			obj.set_data();
			obj.calculate();
			obj.get_data();
			break;

		case 2:
			cout << "RECTANGLE" << endl;
			AreaOfRectangle obj2;
	
			obj2.set_data();
			obj2.calculate();
			obj2.get_data();
			break;


		default: 
			cout << "INvaLid choice." << endl;
	}

	

	return 0;

}