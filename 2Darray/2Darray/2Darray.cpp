// 2Darray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int arr[4][6][3];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 3; k++) {
				arr[i][j][k] = i + j + k;
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 3; k++) {
				cout << arr[i][j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}


}