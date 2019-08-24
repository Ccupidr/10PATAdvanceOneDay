#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5+5;
vector<int>mp[maxn];
int n, m, k;
int color[maxn];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	for(int i = 0 ; i < m; ++i){
		int x, y;
		cin >> x >> y;
		mp[x].push_back(y);
	} 
	cin >> k;
	while(k--){
		int f = 0;
	//	cout << k << endl;
		set<int> s;
		for(int i = 0; i < n; ++i){
			cin >> color[i];
			s.insert(color[i]);
		}
		for(int i = 0; i < n; ++i){
			int now_color = color[i];
			for(int j = 0; j < mp[i].size(); ++j) {
				int nex_color = color[mp[i][j]];
				if(now_color == nex_color){
				//	cout << "No" << endl;
					f = 1;
					break;
				}
			}
			if(f) break;
		}
		if(f){
			cout << "No" << endl;
		}
		else{
			cout << s.size() << "-coloring" << endl;	
		}
		f = 0;
		
	}
	return 0;
} 
