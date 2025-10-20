#include <iostream>
using namespace std;

class A
{
	private :
		int i;

	public :
		A(int x = 0)
		{
			i = x;
		}

	friend class B;

};


class B
{
	public:

	void show(A &tob)	// tob - object name temparory object dil
	{
		cout << "In show I : " << tob.i << endl;
		// tob.display();
	}
};




int main()
{
	A oa(11);	// i:11
	
	B ob;
	ob.show(oa);

	return 0;

}


/*
	jr don class ahe, class A and class B
	ani class B la class A che private data member access krayche ahe
	so, tumhala tob.display() call krayla phije PN nhi ahe tumchya kde display mg,
	pahile show() class chya baher hota, ata to class B chya aat madhe ahe
	mg tumhala to 'CLASS ch AS A AFRIEND' mhnun declare karava lagel.
*/