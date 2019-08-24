#include <bits/stdc++.h>

using namespace std;

int main(){
	int m, n, k;
	cin >> m >> n >> k;
	while(k--){
		int f = 0;
		stack<int> s;
		vector<int>vec(n);
		for(int i = 0; i < n; ++i){
			cin >> vec[i];
		}
		int index = 0;
		for(int i = 1; i <= n; ++i){
			s.push(i);
			if(s.size() > m) break;
			while(!s.empty() && s.top() == vec[index]){
				s.pop();
				index++;
			}
		}
		if(index == n) cout << "YES\n";
		else cout << "NO\n";
	}
	
	
	return 0;
}
