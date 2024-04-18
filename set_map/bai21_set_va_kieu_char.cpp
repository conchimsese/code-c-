#include <bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    set<char> se;
    while(n--){
        char x; cin >> x;
        se.insert(x);
    }
    cout << se.size() << endl;
    auto it2= se.begin();
    while(it2 != se.end())
    {
    	cout << *it2 << " ";
    	it2++;
	}
    
	cout << endl;
	auto it = se.rbegin();
    while(it != se.rend())
    {
    	cout << *it << " ";
    	it++;
	}
    return 0;
}
