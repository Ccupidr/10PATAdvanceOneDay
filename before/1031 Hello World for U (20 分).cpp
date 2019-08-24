#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.length() + 2;
	int n1 = n / 3;
	int n2 = n / 3 + n % 3;
	char U[100][100];
	for(int i = 0; i < 100; ++i){
		for(int j = 0 ; j < 100; ++j){
			U[i][j] = ' ';
		} 
	}
	int index = 0;
	for(int i = 0; i < n1; ++i)
		U[i][0] = s[index++];
	for(int i = 1; i < n2; ++i)
		U[n1-1][i] = s[index++];
	for(int i = n1-2;i>=0; --i)
		U[i][n2-1] = s[index++];
	for(int i = 0 ; i < n1; ++i){
		for(int j = 0 ; j < n2; ++j)
			cout << U[i][j];
		cout << endl;
	}
	return 0;
}
