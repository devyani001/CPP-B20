// Function Over-riding

#include <iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout << "Display() : Parent class Chatting" << endl;
		}
};

class B : public A
{
	public :
		void display()
		{
			A::display();
			cout << "Display() : Child class Calling" << endl;
		}
};

class C : public B
{
	public :
		void display()
		{
			A::display();
			B::display();
			cout << "display of C : Payment feature" << endl;
		}
};


int main()
{
	C ob;
	ob.display();

	return 0;
}


/*
	OUTPUT :
	---------
	Display() : Parent class Chatting
	--> (called coz of A::display();)
	Display() : Parent class Chatting
	Display() : Child class Calling
	--> (called coz of B::display(); B chya display madhe don display() method ahe ek A chi ani ek B chi)
	display of C : Payment feature
*/

/*
	function prototype -
						return_type fun_name parameter;
						void		display	 (int i, int j);
						- (int i, int j) variable name doesn't matter but datatype must be 'SAME'.



	Function Overloading :
	-----------------------
	class A
	{
		void display(int i)
		{
			
		}

		void display(float f)
		{
	
		}
	};


	Function Over-riding :
	-----------------------
	--> When function prototype of parent function is similar to child function then it is called as function overriding. over-writing is different;
	--> child members overrides parent members.

	class P
	{
		public :
			void display(int i)
			{
				
			}
	};

	class C : public P
	{
		public :
			void display(int x)
			{
	
			}
	};

	Note : parent function cha prototype = child function cha prototype
*/