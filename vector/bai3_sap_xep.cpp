#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int n; cin >> n; 
	while(n--){
		int x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
	sort(v.begin(), v.end(), greater<int>());
	cout << endl;
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
	return 0;
}
