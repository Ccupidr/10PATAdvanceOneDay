#include<bits/stdc++.h>

using namespace std;
int to_dd(int x,int radix){
	int arr[105],len = 0;
	while(x){
		arr[len++] = x % radix;
		x /= radix;
	}
	for(int i = 0; i < len; ++i)
		x = x * radix + arr[i];
	return x;
}
bool isPrime(int n) {
	if(n == 0 || n == 1) return false;
	for(int i = 2; i <= sqrt(n); ++i){
		if(n % i == 0) return false;
	} 
	return true;
}
int main(){
	int n,d;
	while(cin >> n && n >= 0){
		cin >> d;
		//int res = to_d(n,d);
		
		int res2 = to_dd(n, d);
		if(isPrime(n) && isPrime(res2)){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}	
	}

//	cout << res << " " << res2 << endl; 
	return 0;
}
