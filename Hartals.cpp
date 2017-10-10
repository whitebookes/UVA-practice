#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	while (n--) {
		int day = 0;
		cin >> day;
		int group_count = 0;
		cin >> group_count;
		int group[101] = { 0 };
		int i = 1;
		while (i <= group_count) {
			cin >> group[i];
			i++;
		}
		day++;
		group_count++;
		bool failday[100][3700];
		for (int c = 0;c<100;c++)for (int d = 0;d<3700;d++)failday[c][d] = true;
		for (int j = 1;j<group_count;j++) {
			for (int k = group[j];k<day;k += group[j]) {
				failday[j][k] = false;
			}
		}
		int ans = 0;
		for (int a = 1;a<day;a++) {
			if (a % 7 != 6) {
				if (a % 7 != 0) {
					int tmp = 0;
					for (int b = 1;b<group_count;b++) {
						if (failday[b][a] == false) {
							tmp++;
						}
					}
					if (tmp>0)ans++;
				}
			}
		}
		cout << ans << endl;
	}


	return 0;
}