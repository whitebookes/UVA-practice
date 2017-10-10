#include<iostream>
#include<string>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	string key = "c0111001111d0111001110e0111001100f0111001000g0111000000a0110000000b0100000000C0010000000D1111001110E1111001100F1111001000G1111000000A1110000000B1100000000";
	while (n--) {
		string str;
		cin >> str;
		int tmp[10] = { 0 };
		bool check[10] = { 0 };
		for (int i = 0;i<str.length();i++) {
			int t = 0;
			for (int j = key.find(str[i]) + 1;j<key.find(str[i]) + 11;j++) {
				if ((key[j] - '0') != check[t]) {
					check[t] = (key[j] - '0');
					if ((key[j] - '0'))tmp[t]++;
				}
				t += 1;
			}

		}
		cout << tmp[0];
		for (int i = 1;i<10;i++)cout << " " << tmp[i];
		cout << endl;

	}



	return 0;
}