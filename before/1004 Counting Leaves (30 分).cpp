#include<bits/stdc++.h>

using namespace std;
const int maxn = 505;
vector<int>tree[maxn];
int book[maxn], maxDepth = -1;

void dfs(int index, int depth){
	if(tree[index].size() == 0){
		book[depth]++;
		maxDepth = max(depth, maxDepth);
		return;
	}
	for(int i = 0 ; i < tree[index].size(); ++i)
		dfs(tree[index][i],depth+1);
}
int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0 ; i < m; ++i){
		int id, k;
		cin >> id >> k;
		for(int j = 0; j < k; ++j){
			int child;
			cin >> child;
			tree[id].push_back(child);
		}
	} 
	dfs(1, 0);
	cout << book[0];
	for(int i = 1; i <= maxDepth; ++i){
		cout << " " << book[i];
	}

	return 0;
} 
