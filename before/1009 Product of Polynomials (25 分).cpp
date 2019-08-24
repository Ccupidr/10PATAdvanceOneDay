#include <bits/stdc++.h>

using namespace std;

double arr[1005];
double res[2005];
int main(){
	for(int i = 0; i < 1005; ++i)
		arr[i] = 0.0;
	for(int i = 0; i < 2005; ++i)
		res[i] = 0.0;
	int k;
	cin >> k;
	for(int i = 0; i < k; ++i){
		int n;
		double a;
		cin >> n >> a;
		arr[n] = a;
	}
	cin >> k;
	for(int i = 0 ; i < k; ++i){
		int n;
		double a;
		cin >> n >> a;
		for(int j = 0 ; j < 1005; ++j){
			res[n + j] += arr[j] * a; 
		}
	}
	int cnt = 0;
	for(int i = 0; i < 2005; ++i)
		if(res[i] != 0.0) cnt++;
	cout << cnt;
	for(int i = 2004; i >= 0; --i){
		if(res[i] != 0.0)
			printf(" %d %.1lf",i,res[i]);
	}
	return 0;
}
