#include<iostream>
using namespace std;
int main() {
	int n = 0;
	int num[10000] = { 0 };
	int tmp[10000] = { 0 };

	int a = 1;

	while (cin >> n) {
		int max = 0;
		bool check = true;
		for (int i = 0;i<n;i++) {
			cin >> num[i];
			if (num[i]>max)max = num[i];
			else check = false;
		}
		int c = 0;

		for (int j = 0;j<n;j++) {
			for (int k = j;k<n;k++) {
				tmp[c] = num[j] + num[k];
				c++;
			}
		}
		for (int l = 0;l<c;l++) {
			for (int h = l;h<c;h++) {
				if (l != h&&tmp[l] == tmp[h]) {

					check = false;
				}
			}

		}

		if (check) { cout << "Case #" << a << ": It is a B2-Sequence." << endl; }
		else { cout << "Case #" << a << ": It is not a B2-Sequence." << endl; }
		a++;
		cout << endl;
	}



	return 0;
}