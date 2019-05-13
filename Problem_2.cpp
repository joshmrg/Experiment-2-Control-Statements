#include<iostream>
#include<iomanip>
#include <conio.h>
using namespace std;

int main()
{
	float PESOS, BILL, XPAID, GALLONS1, GALLONS2;
	cout << " WATER BILL OF THE CUSTOMER FOR THE ENTIRE MONTH " << endl;
	cout << "Gallons of water used for the last month:  ";
	cin >> GALLONS1;
	cout << "Gallons of water used this month:  ";
	cin >> GALLONS2;
	cout << " Input unpaid balance:   ";
	cin >> XPAID;

	PESOS = (GALLONS1 + GALLONS2) *1.10;

	if (XPAID > 0)
	{
		cout << " Unpaid balance is: " << XPAID << " and additional 20 Pesos for the late charge on the bill." << endl;
		BILL = PESOS + 35 + 20;
	}
	else
	{
		cout << " All balance from the previous months has been paid, no additional payment will be added." << endl;
		BILL = PESOS + 35;
	}


	cout << " Additional P35 water demand charge added. " << endl;
	cout << " The Total Bill is:" << BILL << " Pesos " << endl;

	_getch();
	return 0;
}