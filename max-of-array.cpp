#include <iostream>
using namespace std;

int main()
{
	int a[5] = {3,2,10,6,9};
	int n;

	int max;

	max = a[0];

	for(int i=0;i<5;i++){
		
		if(max < a[i])
		{
			max = a[i];
			i++;
		}
		else{
			i++;
		}

	}

	cout << "Max : " << max << endl;
	cout << "Hello World !!" << endl;

	return 0;

}