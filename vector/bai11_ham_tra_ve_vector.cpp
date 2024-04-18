#include<bits/stdc++.h>
using namespace std;
bool nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}
vector<int> prime_list(vector<int> v){
	vector<int> ans;
	for(auto it : v){
		if(nt(it)){
			ans.push_back(it);
		}
	}
	return ans;
}
int main(){
	int n; cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	vector<int> res = prime_list(v);
	for(auto x: res){
		cout << x << " ";
	}
	return 0;
}
