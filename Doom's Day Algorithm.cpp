#include<iostream>
#include<string>
using namespace std;
int main() {
	int year[13][32] = { 0 };
	int d = 6;
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	string day[8] = { " " , "Monday" ,"Tuesday" ,"Wednesday" ,"Thursday" ,"Friday" ,"Saturday" ,"Sunday" };
	for (int i = 12;i>0;i--) {
		for (int j = month[i];j>0;j--) {
			year[i][j] = d;
			d--;
			if (d == 0) { d = 7; };
		}
	}
	int c = 0;
	cin >> c;
	while (c--) {
		int M = 0, D = 0;
		cin >> M >> D;
		cout << day[year[M][D]] << endl;

	}

	return 0;
}