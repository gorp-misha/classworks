
#include "pch.h"
#include <iostream>
using namespace std;

double product(double a, double b) {
	return a * b;
}

int main() {
	double num1 = 2.5; int num2 = 8;
	int result = product(num1, num2);
	cout << result << endl;
	return 0;
}
