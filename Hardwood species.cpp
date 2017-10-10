#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int a = 0;
	while (n--) {
		if (a)cout << endl;
		a++;
		string str[10000] = {};
		int t = 0;
		while (getline(cin, str[t])) {
			if (str[t] != "")t++;
			else if (t) break;
		}
		sort(str, str + t);
		float ans = 1.0;
		for (int i = 1;i <= t;i++) {
			if (str[i] == str[i - 1])ans++;
			else {
				cout << str[i - 1] << " " << fixed << setprecision(4) << ans / t * 100 << endl;
				ans = 1.0;
			}


		}




	}




}