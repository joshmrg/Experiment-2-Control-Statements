#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << "FIBONACCI NUMBERS" << endl;

	int X=0, Y=1, Z, FIBONACCI;
	cout << X << "," << Y << ",";
	for (FIBONACCI = 0; FIBONACCI <= 20; FIBONACCI++)
	{
		if (FIBONACCI == 19)
		{
		Z = X + Y;
		X = Y;
		Y = Z;
		cout << Z << endl << endl << endl;
		}

		else if (FIBONACCI <= 18)
		{
			Z = X + Y;
			X = Y;
			Y = Z;
			cout << Z << ",";
		}

	
	}

	_getch();
	return 0;
}