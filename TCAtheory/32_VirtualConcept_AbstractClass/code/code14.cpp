#include <iostream>
using namespace std;

class Shape
{
	public :
		virtual void Area() = 0;
};

int main()
{

	Shape *P = NULL;

	return 0;
}


/*
	OUTPUT : ERROR
	---------------
	code13.cpp:13:8: error: cannot declare variable 'ob' to be of abstract type 'Shape'
  	Shape ob;
    	    ^~
	code13.cpp:4:7: note:   because the following virtual functions are pure within 'Shape':
 	class Shape
    	   ^~~~~
	code13.cpp:7:16: note:  virtual void Shape::Area()
   	virtual void Area() = 0;
    	            ^~~~


    --> Shape *P = new Shape();
    	dynamically object bnvlyavr pn error yeto

    --> BUT normal *P bnvlela chalto, No error
    	pkt address asto tyat

    	Shape *P = NULL;
		code compile hoto --> yes

*/