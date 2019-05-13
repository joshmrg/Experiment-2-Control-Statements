#include<iostream>
#include <conio.h>
using namespace std;

int main()
{
	cout << " Numbers 1 - 10, and 10-30 by 2's" << endl;
	int x;
	for (x = 1; x <= 30;)
	{
		if (x < 30)
			cout << x << ",";
		else
			cout << x << endl;

		if (x > 9)
			x += 2;
		else
			x += 1;
	}
	
	_getch();
	system("pause");
	return 0;
}