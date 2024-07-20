#include<iostream>
using namespace std;
bool summOdd(int n) {
	if (n % 2 != 0)
		return true;
}
int main() {
	int range;
	cout << "Enter range:\n";
	cin >> range;
	cout << "=========\n";
	int sum = 0;
	for (int i = 1; i <= range; i++) {
		if (summOdd(i))
			sum += i;
	}
	cout << "sum of odd number is :" << sum << endl;
	return 0;

}