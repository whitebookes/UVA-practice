#include<iostream>
using namespace std;
int main() {
	int a[39] = { 0 };
	a[0] = 1;
	a[1] = 1;
	for (int i = 2;i<39;i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	int n = 0;
	cin >> n;
	while (n--) {
		bool check = false;
		int num = 0;
		cin >> num;
		cout << num << " = ";
		for (int j = 38;j>0;j--) {
			if (num >= a[j]) {
				cout << "1";
				num -= a[j];
				check = true;
			}
			else if (check)cout << "0";

		}

		cout << " (fib)" << endl;
	}


	return 0;
}