#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkcp(ll n)
{
	int tmp = sqrt(n);
	if(tmp * tmp == n) return 1;
	return 0;
}
int main()
{
	ll n;
	cin >> n;
	if(checkcp(n)) cout << "YES";
	else cout << "NO";
	return 0;
}
