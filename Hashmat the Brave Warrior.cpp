#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long int a, b = 0;
	while (cin>>a>>b){
		
		cout << max(a, b) - min(a, b) << endl;	
		
	}

	system("pause");
	return 0;
}
