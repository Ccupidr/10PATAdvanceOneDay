#include <bits/stdc++.h>

using namespace std;


int flag = -1;
struct ac{
	int id, best_id;
	double score[4];
	int rank[4];
}stu[2005];
int exists[1000000];
bool cmp(ac x, ac y){
	return x.score[flag] > y.score[flag];
} 
int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0 ; i < n; ++i){
		cin >> stu[i].id >> stu[i].score[1] >> stu[i].score[2] >> stu[i].score[3];
		stu[i].score[0] = (stu[i].score[1] + stu[i].score[2] + stu[i].score[3]) / 3.0;
	}
	 
	for(int i = 0; i < 4; ++i){
		flag = i;
		sort(stu, stu+n, cmp);
		stu[0].rank[i] = 1;
		for(int j = 1 ; j < n; ++j){
			stu[j].rank[i] = j + 1;
			if(stu[j].score[i] == stu[j-1].score[i])
				stu[j].rank[i] = stu[j-1].rank[i];
		}
		
	}
	for(int i = 0; i < n; ++i){
		exists[stu[i].id] = i+1;
		int minn = stu[i].rank[0];
		stu[i].best_id = 0;
		for(int j = 1; j < 4; ++j){
			if(stu[i].rank[j] < minn){
				minn = stu[i].rank[j];
				stu[i].best_id = j;
			}
		}
	}
	char c[4] = {'A','C','M','E'};
	for(int i = 0 ; i < m; ++i){
		int num;
		cin >> num;
		int index = exists[num];
		if(index != 0){
			int best_in = stu[index-1].best_id;
			printf("%d %c\n",stu[index-1].rank[best_in], c[best_in]);
		}
		else{
			cout << "N/A\n";
		}
	}
	
	return 0;
}


/*
5 6
310101 98 85 88
310102 70 95 88
310103 82 87 94
310104 91 91 91
310105 85 90 90
310101
310102
310103
310104
310105
999999


*/
