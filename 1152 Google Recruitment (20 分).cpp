#include <bits/stdc++.h>

using namespace std;
bool isPrimer(int x){
	if(x == 0 || x == 1) return false;
	if(x == 2 || x == 3) return true;
	for(int i = 2; i * i <= x; ++i){
		if(x % i == 0) return false; 
	}
	return true;
}
int main(){
	int l, k;
	string str;
	cin >> l >> k >> str;
	for(int i = 0 ; i <= l - k; ++i){
		string nums = str.substr(i, k);
		int num = stoi(nums);
		if(isPrimer(num)){
			cout << nums;
			return 0;
		}
	}
	cout << "404";
	return 0;
}
