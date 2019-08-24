#include<bits/stdc++.h>

using namespace std;
struct ac{
	string name;
	int status, month, time, day, hour, mintue;
};
bool cmp(ac x, ac y){
	if(x.name != y.name) return x.name < y.name;
	return x.time < y.time;
}
int rates[30];
double getTol(ac x){
	double tol = rates[x.hour] * x.mintue + rates[24]*60*x.day;
	for(int i = 0; i < x.hour; ++i){
		tol += rates[i] * 60;
	}
	return tol/100.0;
}
int main(){
	for(int i = 0 ; i < 24; ++i){
		scanf("%d", &rates[i]);
		rates[24] += rates[i];
	}
	int n;
	scanf("%d",&n);
	vector<ac> peo(n);
	for(int i = 0 ;i < n; ++i){
		cin >> peo[i].name;
		scanf("%d:%d:%d:%d", &peo[i].month, &peo[i].day, &peo[i].hour, &peo[i].mintue);
		string s;
		cin >> s;
		if(s == "on-line") peo[i].status = 1;
		else peo[i].status = 0;
		peo[i].time = peo[i].day * 24 * 60 + peo[i].hour*60+peo[i].mintue;
			
	}
	sort(peo.begin(), peo.end(), cmp);
	map<string, vector<ac> > stu;
	for(int i = 1; i < n; ++i){
		if(peo[i-1].name == peo[i].name && peo[i-1].status == 1 && peo[i].status == 0){
			stu[peo[i-1].name].push_back(peo[i-1]);
			stu[peo[i].name].push_back(peo[i]);
		}
	}
	for(auto it : stu){
		vector<ac> t = it.second;
		cout << it.first;
		printf(" %02d\n",t[0].month);
		double tol = 0;
		for(int i = 1 ; i < t.size(); i+=2){
			double m = getTol(t[i]) - getTol(t[i-1]);
			printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2lf\n", t[i-1].day, t[i-1].hour, t[i-1].mintue, t[i].day, t[i].hour, t[i].mintue, t[i].time - t[i-1].time, m);
			tol += m;
		}
		printf("Total amount: $%.2lf\n",tol);
	}
	
	return 0;
} 
