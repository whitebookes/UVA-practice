#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

	int c = 0;
	int tmp = 0;
	cin >> c;

	int ans[1000];
	for (int a = 0; a < 1000; a++)ans[a] = 0;
	while (c--){
		int sn = 0;
		int md=0;
		
		cin >> sn;
		int s[501];
		for (int b = 0; b < 501; b++)s[b] = 0;
		for (int i = 0; i < sn; i++)cin >> s[i];
		sort(s, s + sn);
		md = s[sn / 2];	
		for (int j = 0; j < sn; j++){
			if (md - s[j] >= 0){
				ans[tmp] = ans[tmp] + (md - s[j]);
			}
			else{
				ans[tmp] = ans[tmp] - (md - s[j]);
			}
		}
		tmp++;
	}
	for (int k = 0; k < tmp; k++){
		cout << ans[k] << endl;
	}







	system("pause");
	return 0;
}