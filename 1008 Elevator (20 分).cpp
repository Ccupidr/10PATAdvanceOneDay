#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int now = 0;
	int res = 0;
	for(int i = 0; i < n; ++i){
		int to;
		cin >> to;
		if(to > now)
			res += 6 * (to - now);
		else 
			res += 4 * (now - to);
		res += 5;
		now = to;
	}
	cout << res << endl;
	return 0;
}
