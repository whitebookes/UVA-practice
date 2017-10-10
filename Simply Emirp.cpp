#include<iostream>
using namespace std;
bool prime(int num) {
	for (int i = 2;i<num;i++) {
		if (num%i == 0) {
			return false;
			break;
		}
	}
	return true;


}
int main() {
	int n = 0;
	while (cin >> n) {
		int a[100] = { 0 };
		int tmp = n;
		if (prime(n)) {
			int num = 0;
			int i = 0;
			while (n != 0) {
				a[i] = n % 10;
				n /= 10;
				i++;
			}
			int k = 1;
			for (int j = i - 1;j >= 0;j--) {
				num += a[j] * k;
				k *= 10;
			}
			if (prime(num) && num != tmp)cout << tmp << " is emirp." << endl;
			else if (num == tmp)cout << tmp << " is prime." << endl;
			else cout << tmp << " is prime." << endl;
		}
		else
			cout << tmp << " is not prime." << endl;


	}
	return 0;
}