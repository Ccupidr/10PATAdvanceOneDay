#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e6+5; 
bool vis[maxn];
int main(){
	int n;
	cin >> n;
	map<int, bool> mp
	for(int i = 0; i < n; ++i){
		int x;
		cin >> x;
		if(x <= 0)
			continue;
		mp[x] = true;
	}
	for(int i = 1; i < maxn; ++i){
		if(mp[i] == false){
			cout << i << endl; 
			break;
		}
	} 
	
	return 0;
}
