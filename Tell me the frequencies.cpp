#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string str;
	int t = 1;
	while (getline(cin, str, '\n')) {
		if (t != 1)cout << endl;
		t++;
		int max = 0;
		int tmp[1000] = { 0 };
		int alpha[1000] = { 0 };
		int c = 0;
		bool check = true;
		for (int j = 0;j<str.length();j++) {
			check = true;
			for (int k = 0;k<j;k++) {
				if (alpha[k] == str[j]) {
					check = false;
					break;
				}
			}
			if (check) {
				alpha[c] = str[j];
				c++;
			}
		}
		sort(alpha, alpha + c);
		for (int i = 0;i<str.length();i++) {
			tmp[str[i]]++;
			if (tmp[str[i]]>max)max = tmp[str[i]];
		}
		for (int m = 1;m <= max;m++) {
			for (int n = c - 1;n >= 0;n--) {
				if (tmp[alpha[n]] == m) {
					cout << alpha[n] << " " << m << endl;
				}

			}
		}


	}



	return 0;
}