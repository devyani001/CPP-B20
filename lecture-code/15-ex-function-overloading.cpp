#include <iostream>
using namespace std;

class PrintData
{
	public :

		void print(int num)
		{
			cout << "Data : " << num << endl;
		}

		void print(int a, int b)
		{
			cout << "[" << a << "," << b << "]" << endl;
		}

		void print(const char S[])
		{
			cout << "\"" << S << "\"" << endl;
		}

		//     --> \" for printing "" in output ...

		// 					OR

		void print(string S1)
		{
			cout << "\"" << S1 << "\"" << endl;
		}
};

int main()
{
	PrintData ob;

	ob.print(5);
	ob.print(11,22);
	ob.print("TCA");
	ob.print("DEVYANI");

	return 0;

}