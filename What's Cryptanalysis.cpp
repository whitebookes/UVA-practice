#include<iostream>
#include<string>
using namespace std;
int main() {
	int n = 0;
	int max = 0;
	cin >> n;

	int a[1000] = { 0 };
	cin.ignore();
	while (n--) {

		string str;
		getline(cin, str, '\n');
		if (str == "") { n++;continue; }

		for (int i = 0;i<str.length();i++) {
			if (isalpha(str[i])) {
				int tmp = (a[toupper(str[i]) - 'A'] += 1);

				if (max >= tmp)max = max;
				else max = tmp;
			}

		}
	}

	while (max != 0) {
		for (int j = 0;j<26;j++) {
			if (a[j] == max) { cout << char(j + 'A') << " " << max << endl; }
		}
		max--;

	}




	return 0;
}