#include <bits/stdc++.h>
using namespace std;

bool locphat(long long n){
    while(n)
    {
    	int tmp = n % 10;
    	if(tmp != 0 && tmp != 6 && tmp != 8) return 0;
    	n /= 10;
	}
	return 1;
}

int main(){
    long long n; cin >> n;
    if(locphat(n)){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}
