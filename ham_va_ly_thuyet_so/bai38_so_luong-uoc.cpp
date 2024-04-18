#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod = 1e9 + 7;
ll d[100005];
void phantich(ll n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			while(n % i == 0)
			{
				d[i]++;
				n /= i;
			}
		}
	}
	if(n > 1) d[n]++;
}
int main()
{
	int n; cin >> n;
	ll res = 1;
	for(ll i = 2; i <= n; i++)
	{
		phantich(i);
	}
	for(ll i = 0; i <= 10000; i++)
	{
		res = (res * (d[i] + 1)) % mod;
	}
	cout << res % mod;
	return 0;
}
