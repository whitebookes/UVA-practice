#include<iostream>
#include<string>
using namespace std;
int main() {
	int x = 0, y = 0;
	int mx = 0, my = 0;
	cin >> mx >> my;
	char z;
	bool check[100][100] = { false };
	while (cin >> x >> y >> z) {

		string str;
		cin >> str;

		bool lost = false;
		for (int i = 0;i<str.length();i++) {
			if (str[i] == 'R') {
				if (z == 'E')z = 'S';
				else if (z == 'W')z = 'N';
				else if (z == 'S')z = 'W';
				else if (z == 'N')z = 'E';

			}
			else if (str[i] == 'L') {
				if (z == 'E')z = 'N';
				else if (z == 'W')z = 'S';
				else if (z == 'S')z = 'E';
				else if (z == 'N')z = 'W';
			}
			else if (str[i] == 'F') {
				if (z == 'E')x++;
				else if (z == 'W')x--;
				else if (z == 'S')y--;
				else if (z == 'N')y++;

			}
			if (x<0 || x>mx || y<0 || y>my) {
				if (z == 'E')x--;
				else if (z == 'W')x++;
				else if (z == 'S')y++;
				else if (z == 'N')y--;
				if (check[x][y])continue;
				else {
					check[x][y] = true;
					lost = true;
					break;
				}
			}


		}
		cout << x << " " << y << " " << z;
		if (lost)cout << " LOST";
		cout << endl;
	}



	return 0;
}