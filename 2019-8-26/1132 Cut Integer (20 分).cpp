#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll x;
		cin >> x;
		string z = to_string(x);
		string a = z.substr(0,z.length()/2);
		string b = z.substr(z.length()/2);
		ll A = atoi(a.c_str());
		ll B = atoi(b.c_str()); 
		// cout << A << " " << B << endl;
		if(A*B < 0 || x%(A*B)) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	return 0;
} 
