#include <bits/stdc++.h>

using namespace std;

const int maxn = 205;
const int INF = 0x3f3f3f3f;
int mp[maxn][maxn];
int n, m;
int res_id = 1000, res = INF;

void solve(int id){
	int sum = 0, f = 1;
	int v_cnt;
	cin >> v_cnt;
	vector<int> v(v_cnt);
	set<int> s; 
	for(int i = 0; i < v_cnt; ++i){
		cin >> v[i];
		s.insert(v[i]);
	}
	for(int i = 0 ; i < v_cnt - 1; ++i){
		if(mp[v[i]][v[i+1]] == INF) f = 0;
		sum += mp[v[i]][v[i+1]];
	}
	if(f==0){
		cout << "Path "<< id << ": NA (Not a TS cycle)" << endl;
	}
	else if(v[0] != v[v_cnt-1] || s.size() != n){
		cout << "Path "<< id <<": " << sum << " (Not a TS cycle)" << endl;
	}
	else if(v_cnt != n+1){
		printf("Path %d: %d (TS cycle)\n", id, sum);
		if(sum < res){
			res = sum;
			res_id = id;
		}
	}
	else {
		printf("Path %d: %d (TS simple cycle)\n", id, sum);
		if(sum < res){
			res = sum;
			res_id = id;
		}
	}
	
}

int main(){
	memset(mp, 0x3f, sizeof(mp));
	cin >> n >> m;
	for(int i = 0; i < m; ++i){
		int u, v, c;
		cin >> u >> v >> c;
		mp[u][v] = mp[v][u] = c;
	}
	int k;
	cin >> k;
	for(int i = 1; i <= k; ++i)
		solve(i);
	printf("Shortest Dist(%d) = %d", res_id, res);
	return 0;
}
