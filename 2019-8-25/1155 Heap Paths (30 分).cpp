#include<bits/stdc++.h>

using namespace std;
int arr[1005];
int n;
vector<int> v;
void dfs(int root){
	if(root*2 > n && root*2+1 > n){
		if(root <= n){
			cout << v[0];
			for(int i = 1 ; i < v.size(); ++i){
				cout << " " << v[i];
			}
			cout << endl;
		}
		return; 
	}
	
	v.push_back(arr[2*root+1]);
	dfs(2*root+1);
	v.pop_back();
	
	v.push_back(arr[2*root]);
	dfs(2*root);
	v.pop_back();
	
}
int main(){
	
	cin >> n;
	memset(arr, -1, sizeof(arr));
	for(int i = 1; i <= n; ++i){
		cin >> arr[i];
	}
	int f1 = 1, f2 = 1;// min 
	for(int i = 2; i <= n; ++i){
		if(arr[i/2] >= arr[i]) f1 = 0;
		if(arr[i/2] <= arr[i]) f2 = 0;
	}
	v.push_back(arr[1]);
	dfs(1);
	if(f1 == 1 && f2 == 0){
		cout << "Min Heap" << endl;
	}
	else if(f1 == 0 && f2 == 1){
		cout << "Max Heap" << endl;
	}
	else{
		cout << "Not Heap" << endl;
	}
	return 0;
}
