
#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	using namespace std;
	ifstream ifs;
	string webs;
	ifs.open("C:\\Users\\Admin\\Desktop\\websites.txt");

	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			ifs >> arr[i][j];
		}
	}
	int stroka;
	int stov;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			stov = stov + i;
		}
		cout << endl;
	}






}
