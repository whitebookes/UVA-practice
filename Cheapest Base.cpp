#include<iostream>
using namespace std;
int main() {
	int n = 0;
	int t = 1;
	cin >> n;
	while (n--) {
		int cost[36] = { 0 };
		for (int i = 0;i<36;i++) { cin >> cost[i]; }
		cout << "Case " << t << ":" << endl;
		t++;
		int num_count = 0;
		cin >> num_count;
		int num = 0;
		int sum = 0;
		int min = 0;
		int ans = 0;
		int base[37] = { 0 };
		while (num_count--) {
			cin >> num;
			for (int j = 2;j<37;j++) {
				int sum = 0;
				for (int k = num;k>0;k /= j) {
					sum += cost[k%j];
					if (j == 2)min = sum;
					base[j] = sum;
				}
				if (sum<min) { min = sum; }
			}
			cout << "Cheapest base(s) for number " << num << ":";
			for (int l = 2;l<37;l++) {
				if (base[l] == min)cout << " " << l;
			}
			cout << endl;
		}
		if (n)
			cout << endl;
	}

}