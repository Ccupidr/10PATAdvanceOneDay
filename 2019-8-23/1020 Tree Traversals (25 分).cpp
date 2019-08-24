#include <bits/stdc++.h>

using namespace std;
int n;
int post[35], in[35];
struct ac{
	int index, num;
	ac(){}
	ac(int i, int _n): index(i), num(_n){}
};
vector<ac> vec;
bool cmp(ac x, ac y){
	return x.index < y.index;
}
void dfs(int root, int start, int end, int index){
	if(start > end) return;
	int i = start;
	while(i < end && in[i] != post[root]) ++i;
	vec.push_back(ac(index, post[root]));
	dfs(root - 1 - end + i, start, i - 1, 2 * index);
	dfs(root - 1, i + 1, end, 2 * index + 1);
}
int main(){
	cin >> n;
	for(int i = 0 ; i < n; ++i)
		cin >> post[i];
	for(int i = 0 ; i < n; ++i)
		cin >> in[i];
	
	dfs(n-1, 0, n-1, 1);
	sort(vec.begin(), vec.end(), cmp);
	cout << vec[0].num;
	for(int i = 1; i < vec.size(); ++i){
		cout << " " << vec[i].num;
	}
	return 0;
}
