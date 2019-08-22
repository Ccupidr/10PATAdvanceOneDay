#include<bits/stdc++.h>
using namespace std;

struct mycmp{
	bool operator() (const int& x1, const int& x2) const{
		return x1 > x2;
	}
};
int main(){
	double s[1005];
	for(int i = 0 ; i < 1005; ++i)
		s[i] = 0.0;
	int k;
	scanf("%d",&k);
	for(int i = 0; i < k; ++i){
		int x;
		double y;
		scanf("%d %lf",&x, &y);
		s[x] += y;
	}
	scanf("%d",&k);
	for(int i = 0; i < k; ++i){
		int x;
		double y;
		scanf("%d %lf",&x, &y);
		s[x] += y;
	}
	int cnt = 0;
	for(int i = 0 ; i < 1005; ++i){
		if(s[i] != 0.0){
			cnt++;
		}
	}
	printf("%d",cnt);
	for(int i = 1000; i >= 0; --i){
		if(s[i] != 0.0){
			printf(" %d %.1lf",i, s[i]);
		}
	}
    return 0;
}

/*
2 1 2.4 0 3.2
2 2 1.5 1 0.5

*/
