/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
			int sum1; //define sum1
		
			cout <<	"The numbers between 2-1000 that are divided by sum of digits: \n";
			for (int i = 2; i <= 1000; i++)
			{
				int temp = i;

				while (temp != 0) {
					sum1 = sum1 + (temp % 10);
					temp = temp / 10;
				}

				if (i % sum1 == 0) { //check if num divided 
					cout << " ," << i;

				}
			sum1 = 0;
			}
return 0;
}