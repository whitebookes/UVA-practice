#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a = 0, b = 0;
	while (cin >> a >> b) {
		if (a != 0 && b != 0) {
			int ans = 0;
			int forward = 0;
			forward = sqrt(a);
			if (pow(forward, 2) == a);
			else
				forward++;

			ans = sqrt(b) - forward + 1;

			cout << ans << endl;

		}
		else
			goto End;

	}
End:

	return 0;
}