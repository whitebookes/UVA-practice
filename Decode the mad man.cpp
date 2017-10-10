#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	while (getline(cin, str, '\n')) {
		string tmp = "qwertyuiop[]\\asdfghjkl;\'zxcvbnm,.\/";

		for (int i = 0;i<str.length();i++) {

			if (str[i] == ' ') {
				cout << " ";
			}
			else {
				for (int j = 0;j<33;j++) {

					if (tmp[j] == tolower(str[i]))cout << tmp[j - 2];

				}
			}
		}
		cout << endl;
	}



	return 0;
}