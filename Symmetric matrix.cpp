#include<iostream>
#include<string>
using namespace std;
int main() {
	int c = 0;
	bool once = true;
	bool check = true;
	cin >> c;
	int martix[10000];
	int a = 1;
	while (c--) {
		bool check = true;
		char ab[1];
		cin >> ab[0] >> ab[1];
		int tmp;
		cin >> tmp;
		tmp *= tmp;

		for (int i = 0;i<tmp;i++) {
			cin >> martix[i];
			if (martix[i]<0)check = false;
		}
		int tmp1 = (tmp + 1) / 2;
		for (int j = 0;j<tmp1;j++) {
			if (martix[j] != martix[tmp - 1])check = false;
			tmp--;

		}

		if (check)cout << "Test #" << a << ": Symmetric." << endl;
		else cout << "Test #" << a << ": Non-symmetric." << endl;
		a += 1;
	}
	return 0;
}