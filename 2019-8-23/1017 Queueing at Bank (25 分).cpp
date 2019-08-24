#include <bits/stdc++.h>
using namespace std;
int n, k;
struct ac{
    int time,process;
    ac(){}
    ac(int _t, int _p){
    	time = _t;
    	process = _p;
	}
};

bool cmp(ac x, ac y){
	if(x.time != y.time)
    	return x.time < y.time;
    return x.process < y.process;
}
int main(){
	scanf("%d %d", &n, &k);
    vector<ac> cus(n);
    for(int i = 0; i < n; ++i){
        int h,m,s, pr;
        scanf("%d:%d:%d %d", &h, &m, &s, &pr);
        int t = h*60*60 + m*60 + s;
        if(t > 17*3600) continue;
        cus.push_back(ac(t, pr*60));
    }
    //cout << cus.size() << endl;
    sort(cus.begin(), cus.end(), cmp);
	vector<int> window(k, 8*3600);
    double res = 0.0;
    for(int i = 0; i < cus.size(); ++i) {
        int index = 0, minn = window[0];
        for(int j = 0; j < k; ++j){
            if(minn > window[j]){
                minn = window[j];
                index = j;
            }
        }
        if(window[index] <= cus[i].time){
            window[index] = cus[i].time + cus[i].process;
        }
        else{
            res += (window[index] - cus[i].time);
            window[index] += cus[i].process;
        }
    }
  //  cout << cus.size() << endl;
    printf("%.1lf\n", res / 60.0 / cus.size());
	
	return 0;
}
