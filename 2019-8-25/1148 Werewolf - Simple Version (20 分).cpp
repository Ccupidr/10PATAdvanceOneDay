#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v(n+1);
	for(int i = 1 ; i <= n; ++i)
		cin >> v[i];
	for(int i = 1; i <= n; ++i){
		for(int j = i+1; j <= n; ++j){
			// i, j werewolf
			vector<int>lie, a(n+1, 1);
			a[i] = -1, a[j] = -1; // werewolf -1 // being 1
			for(int k = 1; k <= n; ++k){
				if(v[k] * a[abs(v[k])] < 0){// good
					lie.push_back(k);
				}
			}
			if(lie.size() == 2 && a[lie[0]] + a[lie[1]] == 0){
				cout << i << " " << j << endl;
				return 0;
			} 
		}
	}
	cout << "No Solution" << endl;
	return 0;
}
