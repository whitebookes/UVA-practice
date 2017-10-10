#include<iostream>
using namespace std;
int GCD(int x, int y) {
	while (x%y != 0) {
		int tmp = y;
		y = x%y;
		x = tmp;
	}
	return y;
}
int main() {
	int num = 0;
	while (cin >> num&&num) {
		int G = 0;
		for (int i = 1;i<num;i++)
			for (int j = i + 1;j <= num;j++) {
				G += GCD(i, j);
			}
		cout << G << endl;
	}
	return 0;
}