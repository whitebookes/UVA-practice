#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
#define pi 2*acos(0.0)
using namespace std;
int main() {
	int s = 0, a = 0;
	string str;
	while (cin >> s >> a >> str) {
		s += 6440;
		if (str == "deg") {
			cout << fixed << setprecision(6) << s * 2 * pi*a / 360 << " " << s*sin(a*pi / 360) * 2 << endl;
		}
		else {
			cout << fixed << setprecision(6) << s * 2 * pi*a / 360 / 60 << " " << s*sin(a*pi / 360 / 60) * 2 << endl;
		}



	}



	return 0;
}