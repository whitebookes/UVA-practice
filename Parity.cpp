#include<iostream>
using namespace std;
int a[100] = { 0 };
int two(int n) {
	int i = 0;
	int c = 0;
	while (n != 0) {
		if (n % 2 == 0) {
			a[i] = 0;
			i++;
			n /= 2;
		}
		else {
			a[i] = 1;
			i++;
			c++;
			n /= 2;
		}
	}
	return c;
}
int main() {
	int num = 0;
	while (cin >> num&&num) {

		int ans = 0;
		ans = two(num);
		cout << "The parity of ";
		bool check = false;
		for (int i = 99;i >= 0;i--) {
			if (a[i] == 1) {
				check = true;
			}
			if (check) { cout << a[i]; }
		}
		cout << " is " << ans << " (mod 2)." << endl;
		for (int i = 0;i<100;i++) { a[i] = 0; }

	}

	return 0;
}