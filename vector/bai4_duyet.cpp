#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int n; cin >> n;
	while(n--){
		int x; cin >> x;
		v.push_back(x);
	}
	int l, r; cin >> l >> r;
	for(vector<int>::iterator it = v.begin() + l; it != v.begin() + r + 1; it++){
		cout << *it << " ";
	}
	cout << endl;
	for(vector<int>::iterator it = v.begin() + r; it!= v.begin() + l - 1; it--){
		cout << *it << " ";
	}
	return 0;
}
