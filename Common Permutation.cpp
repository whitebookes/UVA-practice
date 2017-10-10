#include<iostream>
#include<string>
using namespace std;
int main() {
	string str1, str2;
	while (cin >> str1 >> str2) {
		int a[26] = { 0 };
		for (int i = 0;i<str1.length();i++) {
			for (int j = 0;j<str2.length();j++) {
				if (str1[i] == str2[j]) {
					a[str1[i] - 'a']++;
					str2[j] = 0;
					break;
				}

			}

		}
		for (int k = 0;k<26;k++) {
			while (a[k]>0) {
				cout << char(k + 'a');
				a[k]--;
			}
		}
		cout << endl;




	}




	return 0;
}