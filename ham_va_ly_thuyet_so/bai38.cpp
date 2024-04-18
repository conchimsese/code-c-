#include <bits/stdc++.h>
using namespace std;
long long cnt[100000];
long long mod = 1e9 + 7;
void phantich(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			while(n % i == 0)
			{
				cnt[i]++;
				n /= i;
			}
		}
	}
	if(n > 1) cnt[n]++;
}
int main()
{
	int n; cin >> n;
	for(int i = 2; i <= n; i++)
	{
		phantich(i);
	}
	long long result = 1;
	for(int i = 0; i < 100001; i++)
	{
		if(cnt[i])
		{
			result  = (result * (cnt[i] + 1)) % mod;
		}
	}
	cout << result % mod;
	return 0;
}
