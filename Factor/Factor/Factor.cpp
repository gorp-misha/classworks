
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите число для факториала:" << endl;
	cin >> a;
	int p = 1;
	while (a > 0) {
		p = p * a;
		a = a - 1;
	}
	cout << p;
	int r = 3;
	while (r == 3) {
		cout << "AH";
	}
}

