#include<iostream>
using namespace std;
int main() {
	int n = 0;

	while (cin >> n&&n != 0) {
	A:
		int a[10] = { 0 };
		int i = 0;
		while (n>0) {
			a[i] = n % 10;
			n /= 10;
			i++;
		}
		for (int j = 0;j<i;j++) {
			n += a[j];
		}
		if (n>9)goto A;
		else cout << n << endl;

	}



	return 0;
}