#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int m; cin >> m;
	while(m--){
		int x; cin >> x;
		v.push_back(x);
	}
	int n; cin >> n;
	while(n--){
		int x; cin >> x;
		if(x == 1){
			int k; cin >> k;
			if(k >= 0 && k <= m){
				int l; cin >> l;
				v.insert(v.begin() + k, l);
			}
		}
		else{
			int k; cin >> k;
			if(k >= 0 && k < m){
				v.erase(v.begin() + k);
			}
		}
	}
	if(v.empty() == 0){
		for(int x : v){
			cout << x << " ";
		}
	}
	else{
		cout << "EMPTY";
	}
	return 0;
}
