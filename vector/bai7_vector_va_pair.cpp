#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<pair<int, int>> v;
	while(n--){
		int first, second; cin >> first >> second;
		v.push_back(make_pair(first, second));
	}
	vector<double> distance;
	for(vector<pair<int, int>>::iterator it = v.begin(); it != v.end(); it++){
		double res = sqrt(it->first * it-> first + it->second * it->second);
		distance.push_back(res);
	}
	for(double x : distance){
		cout << fixed << setprecision(2) << x << " ";
	}
	return 0;
}
