#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[10000];
	vector<pair<int, int>> v;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		for(vector<pair<int, int>>::iterator it = v.begin(); it != v.end(); it++){
			if(a[i] != it->first){
				v.push_back(make_pair(a[i], 1));
			}
			else{
				it->second ++;
			}
		}
	}
	for(auto x : v){
		cout << x->first << " " << x->second << endl;
	}
	return 0;
}
