#include <bits/stdc++.h>
using namespace std;
struct ac{
	string id;
	int num;
	ac(){}
	ac(string _i, int _num):id(_i), num(_num){}
};

bool cmp(const ac &x, const ac &y){//引用优化 
	if(x.num != y.num) return x.num > y.num;
	return x.id < y.id;
}
int n, m;
int main(){
	ios::sync_with_stdio(false); 
	cin >> n >> m;
	vector<ac> v;
	for(int i = 0 ; i < n; ++i){
		string id;
		int score;
		cin >> id >> score;
		v.push_back(ac(id, score));
	}
	for(int k = 1; k <= m; ++k){
		int type;
		cin >> type;
		if(type == 1){
			string level;
			cin >> level;
			vector<ac> res;
			int f = 0;
			for(int i = 0 ;i < n; ++i){
				if(level == v[i].id.substr(0,1)){
					res.push_back(v[i]);
					f = 1;
				}
			}
			sort(res.begin(), res.end(), cmp);
			cout << "Case " << k <<": " << type << " " << level << endl;
			if(f){
				for(int i = 0; i < res.size(); ++i){
					cout << res[i].id << " " << res[i].num << endl; 
				}
			}
			else{
				cout << "NA" << endl;
			}
		}
		else if(type == 2){
			string term;
			cin >> term;
			int cnt = 0;
			int sum = 0;
			for(int i = 0; i < n; ++i){
				if(term == v[i].id.substr(1,3)){
					cnt++;
					sum += v[i].num;
				}
			}
			cout << "Case " << k <<": " << type << " " << term << endl;
			if(cnt == 0){
				cout << "NA" << endl;
			}
			else{
				cout << cnt << " " << sum << endl;
			}
		}
		else if(type == 3){
			string term;
			cin >> term;
			vector<ac> res;
			unordered_map<string, int> mp;
			int f = 0;
			for(int i = 0 ; i < n; ++i){
				if(term == v[i].id.substr(4, 6)){
					string site = v[i].id.substr(1, 3);
					mp[site]++;
					f = 1;
				}
			}
			for(auto it : mp){
				res.push_back(ac(it.first, it.second));
			}
			sort(res.begin(), res.end(), cmp);
			cout << "Case " << k <<": " << type << " " << term << endl;
			if(f){
				for(int i = 0; i < res.size(); ++i){
					cout << res[i].id << " " << res[i].num << endl;
				}
			}
			else{
				cout << "NA" << endl;
			}
			
		}
	}
	return 0;
}
