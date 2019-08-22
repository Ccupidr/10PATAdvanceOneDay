#include <bits/stdc++.h>

using namespace std;
const int maxn =1e5+5;
int main(){
	int m;
	cin >> m;
	int mint = 9999999, maxt = -1;
	string miname="", maxname="";
	for(int i = 0 ; i < m; ++i){
		string name;
		cin >> name;
		int h,m,s;
		scanf("%d:%d:%d", &h, &m, &s);
		int t1 = s + m * 60 + h * 3600;
		int hh,mm,ss;
		scanf("%d:%d:%d", &hh, &mm, &ss);
		int t2 = ss + mm * 60 + hh * 3600;
		if(t1 < mint){
			mint = t1;
			miname = name;
		}
		if(t2 > maxt){
			maxt = t2;
			maxname = name;
		}
	}
	cout << miname << " " << maxname << endl;
	return 0;
}
