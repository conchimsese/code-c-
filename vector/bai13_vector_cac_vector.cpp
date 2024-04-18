#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int m; cin >> m;
	vector<int> v;
	for(int i = 0; i < n; i++){
	
		for(int j = 0; j < m; j++){
			int x; cin >> x;
			v.push_back(x);
		}
		for(int k = v.size()-1; k >= 0; k--){
			cout << v[k] << " ";
		}
		cout << endl;
		v.clear();
	}
	return 0;
}
