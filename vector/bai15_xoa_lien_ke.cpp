#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> v;
	while(n--){
		int x; cin >> x;
		v.push_back(x);
	}
	for(int i = 0; i < v.size(); i++){
		if(v[i] != v[i+1]) cout << v[i] << " ";
	}
	return 0;
}
