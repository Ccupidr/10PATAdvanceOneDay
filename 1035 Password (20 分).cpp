#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<string>resName;
	vector<string>resPwd;
	int t;
	cin >> t;
	int cnt = 0;
	int x = t;
	while(t--){
		string name, pwd;
		cin >> name >> pwd;
		string oldPwd = pwd;
		for(int i = 0 ;i < pwd.length(); ++i){
			if(pwd[i] == '1') pwd[i] = '@';
			else if(pwd[i] == '0') pwd[i] = '%';
			else if(pwd[i] == 'l') pwd[i] = 'L';
			else if(pwd[i] == 'O') pwd[i] = 'o';
		}
		if(pwd != oldPwd){
			cnt++;
			resName.push_back(name);
			resPwd.push_back(pwd);
		}
	}
	if(cnt == 0){
		if(x == 1)
			cout << "There is " << x << " account and no account is modified\n";
		else
			cout << "There are " << x << " accounts and no account is modified\n";
	}
	lse{
		cout << cnt << endl;
		for(int i = 0 ; i < cnt; ++i)
			cout << resName[i] << " " << resPwd[i] << endl;
	}
	
	return 0;
}
