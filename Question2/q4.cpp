#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double sum = 1;
			int n, x;
			double hezka;
			double i = 1;
			int factorial = 1;
			cout << " enter  n" << endl;
			cin >> n;
			cout << "enter x" << endl;
			cin >> x;
			cout << "e^3 = 1";
			while (i < n) {
				hezka = pow(x, i);
				for (int h = 1; h <= i; h++) {
					factorial = factorial * h; //To find factorial 

				}
				sum = sum + (hezka / factorial);//Tylor Tour
				cout << "+" << hezka << "/" << factorial;
				factorial = 1;
				i++;
			}

			cout << "= " << sum;

		}
	

 

