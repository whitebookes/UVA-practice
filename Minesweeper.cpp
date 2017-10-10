#include<iostream>
using namespace std;
int main() {
	int a = 0;
	int n = 0, m = 0;
	char map[100][100] = { 0 };
	int tmp = 1;
	while (cin >> n >> m&&n&&m) {
		if (a)cout << endl;
		a++;
		for (int i = 0;i<n;i++)
			for (int j = 0;j<m;j++) {
				cin >> map[i][j];
				if (map[i][j] == '*')map[i][j] = '*';
				if (map[i][j] != '*')map[i][j] = '0';
			}



		for (int i = 0;i<n;i++) {
			for (int j = 0;j<m;j++) {
				if (map[i][j] == '*')continue;

				if (map[i - 1][j - 1] == '*'&&i - 1 >= 0 && j - 1 >= 0)map[i][j]++;

				if (map[i - 1][j] == '*'&&i - 1 >= 0)map[i][j]++;

				if (map[i - 1][j + 1] == '*'&&i - 1 >= 0 && j + 1<m)map[i][j]++;

				if (map[i][j - 1] == '*'&&j - 1 >= 0)map[i][j]++;

				if (map[i][j + 1] == '*'&&j + 1<m)map[i][j]++;

				if (map[i + 1][j - 1] == '*'&&i + 1<n&&j - 1 >= 0)map[i][j]++;

				if (map[i + 1][j] == '*'&&i + 1<n)map[i][j]++;

				if (map[i + 1][j + 1] == '*'&&i + 1<n&&j + 1<m)map[i][j]++;

			}

		}

		cout << "Field #" << tmp++ << ":" << endl;
		for (int i = 0;i<n;i++) {
			for (int j = 0;j<m;j++) {
				cout << map[i][j];
			}
			cout << endl;
		}

	}

	return 0;
}