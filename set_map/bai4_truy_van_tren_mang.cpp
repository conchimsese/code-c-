#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	multiset<int> se;
	while(n--){
		int x; cin >> x;
		se.insert(x);
	}
	int q; cin >> q;
	while(q--){
		int choice, x; cin >> choice >> x;
		switch(choice){
			case 1:
				se.insert(x);
				break;
			case 2:
				if(se.find(x) != se.end()){
					auto it = se.find(x);
					se.erase(it);
				}
				break;
			case 3:
				if(se.find(x) == se.end()) cout << "NO\n";
				else cout << "YES\n";
		}
	}
	return 0;
}
