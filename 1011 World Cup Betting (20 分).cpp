#include<bits/stdc++.h>

using namespace std;

int main(){
	char res[3] = {'W','T','L'};
	double tot = 1.0;
	for(int i = 0; i < 3; ++i){
		double x = -1.0;
		int index = 0;
		for(int j = 0; j < 3; ++j){
			double num;
			cin >> num;
			if(x < num) x = num,index = j;
		}
		tot *= x; //cout << x << endl;
		cout << res[index] << " ";
	} 
//	cout << (tot*0.65-1)*2 << endl;
	printf("%.2lf",(tot*0.65-1)*2);	
	
	return 0;
} 
