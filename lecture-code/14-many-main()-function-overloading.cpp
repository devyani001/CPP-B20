#include <iostream>
using namespace std;

class ABC
{
	public :

		void main()
		{
			cout << "I am main with no parameter." << endl;
		}

		void main(int i)
		{
			cout << "I am main with integer parameter : " << i << endl;
		}

		void main(float f)
		{
			cout << "I am main with float parameter   : " << f << endl;
		}
};

int main()
{

	ABC ob;

	ob.main();
	ob.main(5);
	ob.main(5.5f);

	return 0;

}