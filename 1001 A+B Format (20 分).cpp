#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	a += b;
	string str = to_string(a);
	string res = "";
	if(a >= 0){
		int cnt = 0;
		for(int i = str.length()-1; i >= 0;--i){
			res += str[i];
			cnt++;
			if(cnt%3 == 0){
				res += ","; 
			//	cnt = 0; 
		//	cout << res << endl;
			} 
		}
		reverse(res.begin(),res.end());
		if(res[0] == ','){
			for(int i = 1 ;i  < res.length(); ++i){
				cout << res[i];
			}	
		}
		else {
			for(int i = 0 ;i  < res.length(); ++i){
				cout << res[i];
			}	
		}
		
	}
	else{
		int cnt = 0;
		for(int i = str.length()-1; i > 0;--i){
			res += str[i];
			cnt++;
			if(cnt% 3== 0){
				res += ","; 
			} 
		}
		reverse(res.begin(),res.end());
		cout << "-";
		if(res[0] == ','){
			for(int i = 1 ;i  < res.length(); ++i){
				cout << res[i];
			}	
		}
		else {
			for(int i = 0 ;i  < res.length(); ++i){
				cout << res[i];
			}	
		}
	}
	return 0;
}
