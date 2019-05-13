#include <iostream>
#include <cmath>
#include<conio.h>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Input two numbers" << endl;
	int x, y;
	float v;
	const double z = 2.50;
	cout << setprecision(2) << fixed << endl;
	cout << "x :";cin >> x;
	cout << "y :";cin >> y;


	switch (x)
	{
			case 1:
				{
					
					if (y < 5 && y >= 1)
					{
						v = x * y * z;
						cout << "The value is " << setw(10) << v << endl;
					}
					else if (y >= 5)
					{
						v = x * (y / z);
						cout << "The value is " << setw(10) << v << endl;
					}
					else
					{
						v = x + y + z;
						cout << "The value is " << setw(10) << v << endl;
					}
			break;
				}
			case 2:
				{
			
					if (y <= 5)
					{
						v = abs((x - y) / z);
						cout << "The value is " << setw(10) << v << endl;
					}
					else
					{
						v = x - (sqrt(y + z));
						cout << "The value is " << setw(10) << v << endl;
					}

			break;
				}
			default:
				{
					v = x + y + z;
					cout << " The value is " << setw(10) << v << endl;
				}
				break;
	}
	
	_getch();
	return 0;
}