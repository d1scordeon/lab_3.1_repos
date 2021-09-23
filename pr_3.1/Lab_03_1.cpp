// Lab_03_1.cpp
// Бахмат Катерина
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 1

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x = "; 
	cin >> x;

	A = 1 + 9*x;


	// спосіб 1: розгалуження в скороченій формі
	if (x <= 0)
		B = log(abs(sin(x))) + pow(x, 7);
	if (0 < x && x <= 3)
		B = cos(abs(x + 1) / 2) / sin(abs(x + 1) / 2); // ctg = cos/sin
	if (x < 3)
		B = 3 * x - pow(x, 5);

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;


	// спосіб 2: розгалуження в повній формі
	if (x <= 0) {
		B = log(abs(sin(x))) + pow(x, 7);
	}
	else if (x < 3) {
		B = 3 * x - pow(x, 5);
	}
	else {
		B = cos(abs(x + 1) / 2) / sin(abs(x + 1) / 2); // ctg = cos/sin
	}

	y = A + B;

	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}


	