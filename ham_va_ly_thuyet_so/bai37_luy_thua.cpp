#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll luy_thua(ll a, ll b)
{
	a  %= mod;
	ll res = 1;
	while(b)
	{
		if(b % 2) res = (res * a) % mod;
		a = (a*a) % mod;
		b /= 2;
	}
	return res;
}
int main()
{
	ll a, b;
	cin >> a >> b;
	cout << luy_thua(a, b);
	return 0;
}
