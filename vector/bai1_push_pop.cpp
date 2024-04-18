#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(x == 1){
			int y; cin >> y;
			v.push_back(y);
		}
		else{
			if(v.empty() != 1){
				v.pop_back();
			}
		}
	}
	if(v.empty() != 1){
		for(int x : v){
			cout << x << " ";
		}
	}
	else{
		cout << "EMPTY";
	}
	return 0;
}
