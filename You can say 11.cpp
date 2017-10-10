#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string num;
	int sum = 0;
	while (cin >> num) {
		if (num[0] != '0') {
			for (int i = 0; i<num.length(); i += 2)sum += num[i] - '0';
			for (int i = 1; i<num.length(); i += 2)sum -= num[i] - '0';
			if (sum % 11 == 0)cout << num << " is a multiple of 11." << endl;
			else cout << num << " is not a multiple of 11." << endl;
		}
		sum = 0;
	}


	return 0;
}