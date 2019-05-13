#include<iostream>
#include <conio.h>
using namespace std;

int main()
{	
	
	cout << " Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr" << endl;
	cout << " Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr" << endl;
	cout << " Package C: For P1995/mo of unlimited access is provided" << endl;

	int B, T;
	char P;

	cout << " Choose the package you're subscribed to" << endl;
	cin >> P;
	cout << " Enter the duration you used in hours. ";
	cin >> T;

	switch (P)
	{
	case 'A':
	case 'a':
		cout << " Package subscription: A " << endl;
			if (T <= 10)
			{
			cout << "Monthly bill: P995" << endl;
			}
		else if (T <= 744)
		{
			cout << "20 Pesos will be added per succesion of hour" << endl;
			B = (T - 10) * 20 + 995;
			cout << "Monthly bill:" << B << endl;
		}
		else
			cout << "The number of hours entered exceeds the possible hours within a month" << endl;
	break;
	
	case 'B':
	case 'b':
		cout << " Package subscription: B" << endl;
			if (T <= 20)
			{
			cout << "Monthly bill: P1495" << endl;
			}
			else if (T <= 744)
			{
			cout << "10 Pesos will be added per succesion of hour" << endl;
			B = (T - 20) * 10 + 1495;
			cout << "Monthly bill: " << B << endl;
			}
			else
			cout << "The number of hours entered exceeds the possible hours within a month" << endl;
	break;

	case 'C':
	case 'c':
		
		cout << "Package subscription: C" << endl;
		cout << "Monthly bill: P1995" << endl;

	break;
	}
	_getch();
	return 0;
}