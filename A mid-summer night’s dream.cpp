#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n = 0;
	int num[1000] = { 0 };
	while (cin >> n) {
		for (int i = 0;i<n;i++) {
			cin >> num[i];
		}
		sort(num, num + n);
		cout << num[(n - 1) / 2] << " ";
		int tmp = 0;
		for (int j = 0;j<n;j++) {
			if (num[j] == num[(n - 1) / 2] || num[j] == num[n / 2])tmp++;
		}
		cout << tmp << " " << num[n / 2] - num[(n - 1) / 2] + 1 << endl;


	}



}