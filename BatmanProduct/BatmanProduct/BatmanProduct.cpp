

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int size = 900000;
	float points[size];

	ifstream ifs("путь к файлу .tst");
	string temp;
	int t;

	for (int i = 0; i < size; i++) {
		ifs >> temp;
		ifs >> points[i];
		ifs >> t;
	}
	float average = 6.9;
	ofstream ofs("");
	ofs << "Average = " << average << endl;



}