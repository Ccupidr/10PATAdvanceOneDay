#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int t;
	cin >> s >> t;
	int cnt = 0;
	for(int i = 0 ; i < t; ++i){
		string ss = s;
		reverse(ss.begin(), ss.end());
		if(ss == s) break;
		int carry = 0;
		for(int j = 0 ; j < ss.length(); ++j){
			s[j] += ss[j]+carry-'0';
			carry = 0;
			if(s[j] > '9'){
				s[j] -= 10;
				carry = 1;
			} 
		}
		cnt++;
		if(carry == 1) s += '1';
		reverse(s.begin(), s.end());
	}
	cout << s << endl << cnt;
	return 0;
}
