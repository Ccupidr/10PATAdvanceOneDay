#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	string r, g, bb;
	r = g = bb = "";
	if(a==0) r = "00";
	if(b==0) g = "00";
	if(c==0) bb = "00";
	while(a){
		int x = a % 13;
		r = x >= 10 ? char((x-10)+'A') + r: to_string(x) + r;
		a/=13;
	}
	while(b){
		int x = b % 13;
		g = x >= 10 ? char((x-10)+'A') + g: to_string(x) + g;
		b/=13;
	}
	while(c){
		int x = c % 13;
		bb = x >= 10 ? char((x-10)+'A') + bb: to_string(x) + bb;
		c/=13;
	}
	r = r.length() <= 1 ? "0" + r : r;
	g = g.length() <= 1 ? "0" + g : g;
	bb = bb.length() <= 1 ? "0" + bb : bb;
	cout << "#" << r << g << bb;
	return 0;
} 
