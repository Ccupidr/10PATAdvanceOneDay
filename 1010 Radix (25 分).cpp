#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll to_dec(string str,int radix){
	ll res = 0;
	for(int i = 0 ; i < str.length(); ++i){
		if(str[i]=='-') continue;
		if(str[i] >= '0' && str[i] <= '9')
			res = res * radix + str[i] - '0';
		else 
			res = res * radix + str[i]-'a' + 10;
	}
	if(str[0] == '-') res *= -1;
	return res;
}
int binary_find(string str,ll num){
	char it = *max_element(str.begin(), str.end());
	ll low = (isdigit(it) ? it - '0' : it - 'a' + 10) + 1;
	ll high = max(num, low);
	while(low <= high){
		ll mid = (low + high) >> 1;
		ll temp = to_dec(str, mid);
		if(temp > num || temp <= 0) high = mid - 1;
		else if(temp == num) return mid; 
		else low = mid + 1;
	}
	return -1;
}
int main(){
	string n1, n2;
	int tag, radix;
	cin >> n1 >> n2 >> tag >> radix;
	if(tag == 2) swap(n1,n2);
	int  res_tag = binary_find(n2,to_dec(n1, radix));
	if(res_tag == -1) cout << "Impossible";
	else cout << res_tag;
	return 0;
}
