#include <bits/stdc++.h>

using namespace std;
string s1,s2;
int f[300];
int main(){
	getline(cin, s1);
	getline(cin, s2);
	for(int i = 0 ; i < s2.length(); ++i)
		f[s2[i]] = 1;
	for(int i = 0; i < s1.length(); ++i){
		if(f[s1[i]] != 1) cout << s1[i];
	}
	
	return 0;
}
