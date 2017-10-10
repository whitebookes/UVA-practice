#include<iostream>
#include<string>
using namespace std;
int main() {
	string str[100];
	int line = 0;
	while (getline(cin, str[line], '\n'))line++;
	int max = 0;
	for (int i = 0;i<line;i++) {
		if (max<str[i].length())max = str[i].length();
	}
	for (int j = 0;j<max;j++) {
		for (int k = line - 1;k >= 0;k--) {
			if (str[k].length()>j)cout << str[k][j];
			else if (k)cout << " ";
		}
		cout << endl;
	}



}