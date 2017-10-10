#include<iostream>
using namespace std;
int two(int n) {
	int tmp = 0;
	while (n != 0) {
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			tmp += 1;
			n /= 2;
		}

	}
	return tmp;
}
int sixteen(int n) {
	int tmp = 0;
	while (n != 0) {
		tmp += two(n % 10);
		n /= 10;
	}
	return tmp;
}
int main() {
	int n = 0;
	cin >> n;
	while (n--) {
		int num = 0;
		cin >> num;
		int ans1 = 0, ans2;
		ans1 = two(num);
		ans2 = sixteen(num);
		cout << ans1 << " " << ans2 << endl;

	}

	return 0;
}