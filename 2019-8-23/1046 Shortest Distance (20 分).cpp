#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> vec(n+1, 0);
	for(int i = 1; i <= n; ++i){
		cin >> vec[i];
		vec[i] += vec[i-1];
	}
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		if(a > b)
			swap(a, b);
		int temp = vec[b-1] - vec[a-1];
		cout << min(temp, vec[n] - temp) << endl;
	}
	
	return 0;
}
