#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	while (n--) {
		char map[100][100] = { 0 };
		int height = 0, weight = 0, count = 0;
		cin >> height >> weight >> count;
		cout << height << " " << weight << " " << count << endl;
		for (int i = 0;i<height;i++)
			for (int j = 0;j<weight;j++)
				cin >> map[i][j];
		while (count--) {
			int x = 0, y = 0, ans = 0;
			cin >> x >> y;
			bool check = true;
			while (check) {
				for (int i = -ans;i<ans + 1;i++) {
					for (int j = -ans;j<ans + 1;j++) {
						if (x + i<0 || x + i >= height || y + j<0 || y + j >= weight) {
							check = false;
							break;
						}
						if (map[x + i][y + j] != map[x][y]) {
							check = false;
							break;
						}
					}
					if (!check)break;
				}
				if (check)ans++;
				else break;
			}
			cout << 2 * (ans - 1) + 1 << endl;



		}



	}



	return 0;
}