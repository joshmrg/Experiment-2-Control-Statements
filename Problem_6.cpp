#include<iostream>
#include <conio.h>
using namespace std;

int main()
{

	int a, b, c;
	cout << "The sum of all whole numbers starting from 1 up to the inputed number" << endl;
	cout << " Input 0 to terminate the program" << endl;
	cout << "Enter a number: ";
	cin >> a;

	do
	{
		c = 0;
		for (b = 1; b <= a; b++)
		{
			c = (a*(a + 1)) / 2;
		}
		cout << "The total numbers from 1 to " << a << " = " << c << endl;
		cout << "Please enter a number:  ";
		cin >> a;
		cout << endl;


	} while (a > 0);

	cout << "\nThank you." << endl;

	_getch();
	return 0;
}