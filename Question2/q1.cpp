/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int n;
			cout << " Enter number: ";
			cin >> n;
			double sum;
			if (n < 1) {
				cout << "wrong";
			}
			for (int i = 1; i <= n; i++) {

				sum = sum + (1.0 / (i * i));
			}
			cout << "the answer is :" << sum << endl;

		}

   

