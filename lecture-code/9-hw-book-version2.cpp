#include <iostream>
using namespace std;

class Book
{
	private :

		int bid;
		string bname;
		string bauthor;
		float bprice;

	public :
		
		void set_bid(int id){
			bid = id;
		}

		int get_bid(){
			return bid;
		}

		void set_bname(string name){
			bname = name;
		}

		string get_bname(){
			return bname;
		}

		void set_bauthor(string author){
			bauthor = author;
		}

		string get_bauthor(){
			return bauthor;
		}

		void set_bprice(float price){
			bprice = price;
		}

		float get_bprice(){
			return bprice;
		}

};

int main(){

	Book B[10];

	int tid;
	string tname;
	string tauthor;
	float tprice;
	int n;

	
	cout << "enter no of books : ";
	cin  >> n;

	for(int i=0;i<n;i++)
	{
		cout << "enter book id : ";
		cin  >> tid;

		cin.get();
		cout << "enter book name : ";
		getline(cin,tname);

		cin.get();
		cout << "enter book author : ";
		getline(cin,tauthor);

		cout << "enter book price ";
		cin  >> tprice;

		B[i].set_bid(tid);
		B[i].set_bname(tname);
		B[i].set_bauthor(tauthor);
		B[i].set_bprice(tprice);

	}

	cout << "******************Book information using setter & getter *******************" << endl;

	for(int i=0;i<n;i++)
	{
		cout << "book id     : " << B[i].get_bid()     << endl;
		cout << "book name   : " << B[i].get_bname()   << endl;
		cout << "book author : " << B[i].get_bauthor() << endl;
		cout << "book price  : " << B[i].get_bprice()  << endl;
		cout << "------------------------------------" << endl;
	}

	return 0;

}