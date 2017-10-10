#include<iostream>
#include<math.h>
#include<string>
#include<sstream>
using namespace std;
int main() {
	long long int n = 0;
	int a[100000] = { 0 };
	while (cin >> n) {
		string str;
		cin.ignore();
		getline(cin, str, '\n');
		stringstream sin;
		sin << str;
		long long int b = 0;
		while (sin >> a[b])b++;
		long long int answer = 0;
		for (int i = 0;i<b - 1;i++) {
			answer += pow(n, b - i - 2)*a[i] * (b - i - 1);
		}
		cout << answer << endl;
	}

	return 0;
}