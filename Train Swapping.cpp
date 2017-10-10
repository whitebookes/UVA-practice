#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	while (n--) {
		int train[50] = { 0 };
		int c = 0;
		cin >> c;
		int ans = 0;
		for (int i = 0;i<c;i++) {
			cin >> train[i];
			for (int j = 0;j<i;j++) {
				if (train[j]>train[i]) {
					int tmp = train[j];
					train[j] = train[i];
					train[i] = tmp;
					ans++;
				}

			}

		}
		cout << "Optimal train swapping takes " << ans << " swaps." << endl;

	}
	return 0;
}