#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
    	int x; cin >> x;
    	int check = 0;
    	for(vector<pair<int, int>>::iterator it = v.begin(); it != v.end(); it++){
			if(x == (it->first)){
				it->second++;
				check = 1;
			}
		}
		if(check == 0){
			v.push_back(make_pair(x, 1));
		}
	}

    for(vector<pair<int, int>>::iterator x = v.begin(); x != v.end(); x++){
        cout << x->first << " " << x->second << endl;
    }
    return 0;
}
