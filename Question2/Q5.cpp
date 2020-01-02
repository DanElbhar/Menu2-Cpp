#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int menu = 0;
	while (menu == 0 || menu == 1 || menu == 2 || menu == 3 || menu == 4)
	{
		cout << "please enter your choice" << endl;
		cout << " The Menu:" << endl;
		cout << "0 for Exit \n";
		cout << "1 for sum of 1/(n^2) \n";
		cout << "2 for print numbers that are divided by sum of digits: \n";
		cout << "3 for print arithmetic or geometric progression: \n";
		cout << "4 for Tylor Tour \n";
		cin >> menu;
		if (menu == 0) {
			cout << "Try again" << endl;
		}

		while (menu == 1) {
			int n;
			cout << "please enter a number: ";
			cin >> n;
			double sum = 0;
			if (n < 1) {
				cout << "wrong value";
			}
			for (int i = 1; i <= n; i++) {

				sum = sum + (1.0 / (i * i));
			}
			cout << "the answer is :" << sum << endl;

		}
	
		while (menu == 2) {

			int sum1 = 0; //define sum1
			cout <<
				"The numbers between 2-1000 that are divided by sum of digits: \n";
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

		}
	
		while (menu == 3) {
			int a1;
			int d, q;
			int x;
			cout << "Enter 1 for an arithmetic series, 2 for a geometric series: ";
			cin >> x;
			if (x < 1 || x > 2) {//if coice value not include 
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
		}

		while (menu == 4) {
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
					factorial = factorial * h;

				}
				sum = sum + (hezka / factorial);
				cout << "+" << hezka << "/" << factorial;
				factorial = 1;
				i++;
			}

			cout << "= " << sum;

		}
	
	}
	return 0;
}