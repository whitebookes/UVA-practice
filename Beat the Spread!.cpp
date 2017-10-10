#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	while (n--) {
		int s = 0, d = 0;
		cin >> s >> d;
		int x = 0, y = 0;
		if ((s + d) % 2 == 0)x = (s + d) / 2;
		if ((s - d) % 2 == 0 && (s - d) >= 0)y = (s - d) / 2;
		if (x&&y)cout << x << " " << y << endl;
		else
			cout << "impossible" << endl;
	}

	return 0;
}