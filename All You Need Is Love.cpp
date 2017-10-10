#include<iostream>
#include<string>
using namespace std;
int change(string num) {
	int j = 1;
	int ans = 0;
	for (int i = num.length() - 1.;i >= 0;i--) {
		ans += ((num[i] - '0')*j);
		j *= 2;
	}

	return ans;
}
int main() {
	int n = 0;
	cin >> n;
	int tmp = 1;
	while (n--) {
		string s1, s2;
		cin >> s1 >> s2;
		int S1, S2;
		S1 = change(s1);
		S2 = change(s2);
		while (S1%S2 != 0) {
			int t = 0;
			t = S2;
			S2 = S1%S2;
			S1 = t;
		}
		if (S2 != 1)cout << "Pair #" << tmp << ": All you need is love!" << endl;
		else cout << "Pair #" << tmp << ": Love is not all you need!" << endl;
		tmp += 1;
	}
	return 0;
}