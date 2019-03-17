
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

struct  worker {
	string name;
	int salary;
};

void show(worker a) {
	cout << "---------------------------------------\n";
	cout << "|   ИМЯ РАБОТНИКА  |     ЗАРПЛАТА     |\n";
	cout << "|------------------|------------------|\n";
	cout << "|";
	cout.width(17);
	cout << a.name << " |";
	cout.width(17);
	cout << a.salary << " |\n";
	cout << "|------------------|------------------|\n";
}

void filter(worker a[], int size, int min, int max) {
	for (int i = 0; i < size; i++) {
		if (a[i].salary > min && a[i].salary < max) {
			show(a[i]);
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	worker Drug;
	Drug.name = "Друг";
	Drug.salary = 1500;

	show(Drug);

	return 0;
}


//worker a[] = worker *a 
// * - указатель