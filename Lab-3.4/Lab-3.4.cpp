// Lab_03_4.cpp
// < Проців Роксолана >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 20

#include <iostream>
using namespace std;

int main()
{
	double x;
	double y;

	cout << "x= "; cin >> x;
	cout << "y= "; cin >> y;

	// розгалуження в повній формі
	if ((y <= x && y >= (x - 2) * (x - 2) - 3 && y >= 0) || (y <= -x && y >= (x - 2) * (x - 2) - 3))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;

}