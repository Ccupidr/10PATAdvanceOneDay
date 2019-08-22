#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	long long res = 0;
	for(int i = 0 ; i < s.length(); ++i)
		res += s[i]- '0';
	string sum = to_string(res);
	string nums_en[10] = {"zero","one","two","three", "four", "five", "six", "seven", "eight", "nine"};
	for(int i = 0 ; i < sum.length(); ++i){
		if(i==0) cout << nums_en[sum[i]-'0'];
		else cout << " " << nums_en[sum[i]-'0'];
	}
	return 0;
}
