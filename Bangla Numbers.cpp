#include<iostream>
using namespace std;
int main() {
	long long int num = 0;
	int first = 0;
	int second = 0;
	int tmp = 1;
	while (cin >> num) {
		if (num >= 1000000000) { first = num / 1000000000; second = num % 1000000000; }
		else { second = num % 1000000000; }
		if (tmp<10)
			cout << "   " << tmp << ". ";
		if (tmp >= 10)
			cout << "  " << tmp << ". ";
		tmp++;
		while (first != 0) {
			if (first >= 100000) { cout << first / 100000 << " kuti"; first %= 100000; if (first != 0)cout << " "; }
			else if (first >= 1000) { cout << first / 1000 << " lakh"; first %= 1000; if (first != 0)cout << " "; }
			else if (first >= 10) { cout << first / 10 << " hajar"; first %= 10; if (first != 0)cout << " "; }
			else { cout << first << " shata"; if (second<10000000)cout << " kuti"; if (second != 0)cout << " "; first = 0; }
		}

		while (second != 0) {
			if (second >= 10000000) { cout << second / 10000000 << " kuti"; second %= 10000000; if (second != 0)cout << " "; }
			else if (second >= 100000) { cout << second / 100000 << " lakh"; second %= 100000; if (second != 0)cout << " "; }
			else if (second >= 1000) { cout << second / 1000 << " hajar"; second %= 1000; if (second != 0)cout << " "; }
			else if (second >= 100) { cout << second / 100 << " shata"; second %= 100; if (second != 0)cout << " "; }
			else { cout << second; second = 0; }

		}
		if (num != 0)
			cout << endl;
		if (num == 0) { cout << "0" << endl; }

	}

	return 0;
}