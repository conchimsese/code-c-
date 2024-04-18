#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<pair<char, int>> v;
	for(int i = 0; i < n; i++){
		char c; cin >> c;
		int check = 0;
		for(vector<pair<char, int>>::iterator it = v.begin(); it != v.end(); it++){
			if(it->first == c){
				it->second++;
				check = 1;
				break;
			}
		}
		if(!check){
			v.push_back(make_pair(c, 1));
			
		}
	}
	cout << v.size() << endl;
	for(auto x : v){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}
