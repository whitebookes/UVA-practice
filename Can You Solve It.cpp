#include<iostream>
using namespace std;
int p(int x, int y) {
	return (x + y + 1)*(x + y) / 2 + x;


}
int main() {
	int n = 0;
	cin >> n;
	int tmp = 1;
	while (n--) {
		int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << "Case " << tmp++ << ": " << p(x2, y2) - p(x1, y1) << endl;


	}
	return 0;
}