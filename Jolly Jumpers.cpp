#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n = 0;
	while (cin >> n) {
		int num[3001] = { 0 };
		for (int i = 0;i<n;i++) { cin >> num[i]; }
		int dif[3000] = { 0 };
		for (int j = 0;j<n - 1;j++) { dif[j] = num[j + 1] - num[j];if (dif[j]<0)dif[j] *= -1; }
		bool check = true;
		sort(dif, dif + n - 1);
		for (int k = 1;k<n;k++) {
			if (dif[k - 1] != k)check = false;
		}
		if (check)cout << "Jolly" << endl;
		else cout << "Not jolly" << endl;

	}

	return 0;
}