
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "                    <---------PROGRAM TO SUM -N- NUMBERS--------->\n";
	cout << "Input N number you want to SUM:\n > ";
	int N;
	cin >> N;
	int *nums = new int[N];
	cout << "Input " << N << " integer numbers from -1000 to 1000:  (separate them with ENTER)\n";
	for (int i = 0; i < N; i++) {
		cout << i+1 << ": > ";
		cin >> nums[i];
		if (nums[i] < -1000 || nums[i] > 1000) {
			cout << "Error: Your (number < -1000) or (number > 1000)...\n";
			i = i - 1;
			continue;
		}
	}
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum = sum + nums[i];
	}
	cout << "The SUM of your numbers is " << sum << endl;
	system("pause");
	return 0;
}
