/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
            int a1; //first number
			int d, q;
			int x;
			cout << "Enter 1 for an arithmetic series, 2 for a geometric series: ";
			cin >> x;
			if (x < 1 || x > 2) {//if coice val >1 or val>2
				cout << "wrong ";
			}
			else if (x == 1) {//arithmetic series

				cout << "Enter first element: ";
				cin >> a1;
				cout << "Enter diff: ";
				cin >> d;
				int counter = 0;
				for (counter = 1; counter < 10; counter++)
				{
					cout << a1 + (counter - 1) * d;
					cout << ",";
				}
			}
			if (x == 2) {
				int a1, q;
				cout << "Enter first element: ";
				cin >> a1;
				cout << "Enter factor: ";
				cin >> q;
				int counter;
				for (counter = 1; counter <= 10; counter++)
				{
					cout << a1;
					a1 = a1 * q;
					cout << ",";
				}

			}

    return 0;
}
