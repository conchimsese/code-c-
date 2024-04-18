#include <bits/stdc++.h>
using namespace std;
bool tn(int n){
    int t = n;
    int res = 0;
    while(n)
    {
    	res = res * 10 + ( n % 10);
    	n /= 10;
	}
	if(t == res) return 1;
	return 0;
}

bool chua6(int n){
    while(n)
    {
    	if(n % 10 == 6) return 1;
		n /= 10;
	}
	return 0;
}

bool tong8(int n){
    int sum = 0;
    while(n)
    {
    	sum += n % 10;
    	n /= 10;
	}
	if(sum % 10 == 8) return 1;
	return 0;
}

int main(){
    int a, b; cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(tn(i) && chua6(i) && tong8(i)){
            cout << i << " ";
        }
    }
}
