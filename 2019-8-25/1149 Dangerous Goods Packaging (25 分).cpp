#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5+5;
bool vis[maxn];
vector<int>v[maxn];
int main(){
	int n, k;
	cin >> n >> k;
	
	for(int i = 0; i < n; ++i){
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	while(k--){
		int m;
		cin >> m;
		int f = 1;
		memset(vis, false, sizeof(vis));
		for(int i = 0; i < m; ++i){
			int x;
			cin >> x;
			if(f == 0) continue;
			if(vis[x]){
				f = 0;
				continue;//直接break 最会一组数据会wa 
			}
			for(int j = 0; j < v[x].size(); ++j){
				vis[v[x][j]] = true;
			}
		}
		if(f){
			cout << "Yes" << endl;
		}
		else{ 
			cout << "No" << endl;
		}
	}
	
	return 0;
}
