/*		**************** MY CODE *****************

#include <iostream>
using namespace std;

class MaxData
{

	public : 

		int maximum(int x, int y)
		{
			if(x>y)
			{
				return x;	
			}
			else
			{
				return y;
			}
		}

		int maximum(int a[], int n)
		{

			int max = a[0];

			for(int i=0;i<n;i++)
			{
				if(max < a[i])
				{
					max = a[i];
					i++;
				}
				else
				{
					i++;
				}

			}

			return max;
				
		}

};

int main()
{

	MaxData ob;

	ob.maximum(5,6);
	ob.maximum({3,2,5,1,7},5);

	return 0;

}*/


// **************** FIXED ERROR USING CHATGPT - CODE *****************

#include <iostream>
using namespace std;

class MaxData
{

	public : 

		int maximum(int x, int y)
		{
			if(x>y)
			{
				return x;	
			}
			else
			{
				return y;
			}
		}

		int maximum(int a[], int n)
		{

			int max = a[0];

			for(int i=0;i<n;i++)
			{
				if(max < a[i])
				{
					max = a[i];
					// i++;
				}

			}

			return max;
				
		}

};

int main()
{

	MaxData ob;
	int ans1;
	int ans2;

	ans1 = ob.maximum(7,6);
	cout << "Max1 = " << ans1 << endl;

	int n = 5;
	int a[n] = {4,10,3,1,9};
	
	ans2 = ob.maximum(a,n);
	cout << "Max2 = " << ans2 << endl;

	return 0;

}