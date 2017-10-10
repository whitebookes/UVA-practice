#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	while (cin >> str&&str != "0") {
		int num = 0;
		for (int i = str.length() - 1;i >= 0;i--) {
			num += str[i] - '0';
		}

		if (num % 9 == 0) {
			cout << str << " is a multiple of 9 and has 9-degree ";
			int degree = 1;
			while (num>9) {
				int tmp = 0;
				while (num != 0) {
					tmp += num % 10;
					num /= 10;
				}

				if (tmp % 9 == 0) { degree += 1;num = tmp; }

			}

			cout << degree << "." << endl;
		}
		else cout << str << " is not a multiple of 9." << endl;

	}

	return 0;
}