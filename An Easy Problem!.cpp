#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	while (cin >> str) {
		int ans = 0, num = 0, sum = 0, max = 1;
		for (int i = 0;i<str.length();i++) {
			if (str[i] >= 'A'&&str[i] <= 'Z')num = str[i] - 'A' + 10;
			if (str[i] >= 'a'&&str[i] <= 'z')num = str[i] - 'a' + 36;
			if (str[i] >= '0'&&str[i] <= '9')num = str[i] - '0';
			sum += num;
			if (num>max)max = num;
		}
		for (int j = max;j <= 62;j++) {
			if (sum%j == 0) {
				cout << j + 1 << endl;
				break;
			}
			if (j == 62)
				cout << "such number is impossible!" << endl;

		}


	}
	return 0;
}