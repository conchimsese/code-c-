#include <bits/stdc++.h>
using namespace std;
vector<char> convert_number(long long n){
	vector<char> res;
	while(n){
		if(n % 2) res.push_back('1');
		else res.push_back('0');
		n /= 2;
	}
	int temp = res.size();
	for(int i = 0; i < 64-temp; i++){
		res.insert(res.end(), '0');
	}
	vector<char> tmp;
	for(vector<char>::iterator it = res.end() - 1; it != res.begin() - 1; it--){
		tmp.push_back(*it);
	}
	return tmp;
}
int main(){
	int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout <<  x;
        }
        cout << endl;
    }
}
