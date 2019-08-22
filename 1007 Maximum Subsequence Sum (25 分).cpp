#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for(int i = 0; i < n; ++i)
		cin >> vec[i];
	int sum = -1, lindex = 0 , rindex = n-1, tempsum = 0, tempindex = 0; // tempindex = -1
	for(int i = 0 ; i < n; ++i){
		tempsum += vec[i];
		if(tempsum < 0){
			tempsum = 0;
			tempindex = i + 1;
		}
		if(sum < tempsum){
			sum = tempsum;
			lindex = tempindex;
			rindex = i;
		}
	}
	if(sum < 0) sum = 0;
	cout << sum << " " << vec[lindex] << " " << vec[rindex];
    return 0;
}
