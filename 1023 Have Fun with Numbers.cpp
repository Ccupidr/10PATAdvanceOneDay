#include<bits/stdc++.h>

using namespace std;

int book[10];
char s[25];
int main(){
	cin >> s;
	string res = "";
	int len = strlen(s);
	for(int i = 0; i < len; ++i){
		int x = s[i] - '0';
		book[x]++;
		int xx = x*2%10;
		book[xx]--;
		s[i] = xx+'0';
	}
	int 
	
	return 0;
} 
