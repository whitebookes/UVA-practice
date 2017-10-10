#include<iostream>
using namespace std;
int main() {
	int count = 0;
	cin >> count;
	int c = 1;
	while (count--) {
		int a = 0, b = 0;
		cin >> a >> b;
		int sum = 0;
		if (a % 2 == 0)a++;
		if (b % 2 == 0)b--;
		for (int i = a;i <= b;i += 2) {
			sum += i;
		}
		cout << "Case " << c << ": " << sum << endl;
		c++;
	}
	return 0;
}