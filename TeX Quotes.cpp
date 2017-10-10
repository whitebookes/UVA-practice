#include<iostream>
#include<string>
using namespace std;
int main() {
	string str;
	bool once = true;
	while (getline(cin, str, '\n')) {

		for (int i = 0;i<str.length();i++) {

			if (str[i] == '\"'&&once) { cout << "``";once = false; }
			else if (str[i] == '\"' && !once) { cout << "''";once = true; }
			else cout << str[i];
		}

		cout << endl;

	}



}