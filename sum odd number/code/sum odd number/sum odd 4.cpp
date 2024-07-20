#include<iostream>
using namespace std;
int sumOdd(int n) {
	int sum = 0;
	if (n % 2 != 0) {
		sum += n;
	}
	return sum;
}
int main() {
	int range;
	cout << "Enter range:\n";
	cin >> range;
 cout<<"=========\n";
	int sum = 0;
	for (int i = 1; i <= range; i++) {
		sum += sumOdd(i);
	}
	cout << "sum of odd number is :" << sum << endl;
	return 0;
}