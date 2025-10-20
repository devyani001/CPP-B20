#include <iostream>
using namespace std;

class add{

	public:
		int a,b,ans;
	
	void enter(int a, int b){
		cout << "enter a :" << endl;
		cin >> a;

		cout << "enter b :" << endl;
		cin >> b;
	}

	void display(int ans){
		ans = a + b;
		cout << "addition is : " << ans << endl;
	}
};

int main(){
	
	int x,y;
	int answer;	

	add obj;

	obj.enter(x,y);
	obj.display(answer);

	return 0;
	
}