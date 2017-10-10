#include<iostream>
#include<string>
using namespace std;
int main() {
	int n = 0;
	string str;

	while (cin >> n&&n) {
		int top = 1;
		int east = 4;
		int west = 3;
		int south = 5;
		int north = 2;
		int down = 6;
		int tmp = 0;
		while (n--) {
			cin >> str;
			if (str == "north") {
				tmp = top;
				top = south;
				south = down;
				down = north;
				north = tmp;
			}
			else if (str == "south") {
				tmp = top;
				top = north;
				north = down;
				down = south;
				south = tmp;
			}
			else if (str == "west") {
				tmp = top;
				top = east;
				east = down;
				down = west;
				west = tmp;
			}
			else if (str == "east") {
				tmp = top;
				top = west;
				west = down;
				down = east;
				east = tmp;
			}
		}
		cout << top << endl;

	}




	return 0;
}