	#include<iostream>
	using namespace std;
	bool check = false;
	int main(){
		int a, b = 0;
		int k = 0;
		int c[1000] = { 0 };
		while (cin >> a >> b){
			if (a == 0&&b==0){				
				goto A;
			}
			if (a != 0&&b!=0){
				
				int first[10] = { 0 };
				int second[10] = { 0 };
				int tmp = 0;
				int tmp1 = 0;
				

				while (a != 0){
					first[tmp] = a % 10;
					a /= 10;
					tmp++;
				}
				while (b != 0){
					second[tmp1] = b % 10;
					b /= 10;
					tmp1++;
				}
				for (int i = 0; i < tmp; i++){
					if (check == true){
						if ((first[i] + second[i]+1) >= 10){
							check = true;
							c[k]++;
						}
						else
							check = false;
					}
					else{
						if ((first[i] + second[i] ) >= 10){
							check = true;
							c[k]++;
						}
						else
							check = false;
					}

					}

				}
				
				k++;
			}
		
		
	A:
		for (int j = 0; j < k; j++){
			if (c[j] == 0)cout << "No carry operation." << endl;
			else if (c[j] == 1)
				cout << c[j] << " carry operation." << endl;
			else
				cout << c[j] << " carry operations." << endl;
		}

		
		return 0;
	}