#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<char> v;
	char x;
	while(cin >> x){
		v.push_back(x);
	}
	for(vector<char>::iterator it = v.begin(); it != v.end(); it++){
		if(*it < 'A'){
			cout << *it << " ";
		}
		else if(*it >= 'A' && *it <= 'Z'){
			cout << (char)(*it + 32) << " ";
		}
		else if(*it >= 'a' && *it <= 'z'){
			cout << (char)(*it - 32)<< " ";
		}
	}
	return 0;
}
