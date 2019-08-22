#include <bits/stdc++.h>

using namespace std;
int n,m,k;
int mp[1005][1005];
bool vis[1005];
void dfs(int x){
	vis[x] = true;
	for(int i = 1 ; i <= n; ++i)
		if(mp[x][i] == 1&& vis[i] == false)
			dfs(i);
}
int main(){
	ios::sync_with_stdio(false);
	memset(vis, false, sizeof(vis));
	cin >> n >> m >> k;
	for(int i = 0 ; i < m; ++i){
		int x,y;
		cin >> x >> y;
		mp[x][y] = mp[y][x] = 1;
	}
	for(int i = 0; i < k; ++i){
		memset(vis, false, sizeof(vis));
		int x;
		cin >> x;
		vis[x] = true;
		int cnt = 0;
		for(int j = 1 ; j <= n; ++j){
			if(vis[j] == false){
				dfs(j);
				cnt++;
			}
		}
		cout << cnt - 1 << endl;
	}
	
	return 0;
}
