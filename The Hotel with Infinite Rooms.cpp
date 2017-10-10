#include<iostream>
using namespace std;
int main() {
	int s = 0;
	while (cin >> s) {
		long long int d = 0;
		cin >> d;
		long long int dt = 0;
		while (dt<d) {
			dt += s;
			s += 1;
		}
		s -= 1;
		cout << s << endl;

	}
	return 0;
}