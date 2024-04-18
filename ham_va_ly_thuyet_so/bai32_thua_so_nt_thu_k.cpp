#include <bits/stdc++.h>
using namespace std;

long long ntthuk(long long n, long long k)
{
	long long dem = 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			while(n % i ==0)
			{
				dem++;
				if(dem == k) return i;
				n /= i;
			}
		}
	}
	if(n > 1)
	{
		dem++;
		if(dem == k) return n;
	}
	return 0;
}
int main()
{
	long long n, k; cin >> n >> k;
	if(ntthuk(n, k)) cout << ntthuk(n, k);
	else cout << -1;
	return 0;
}
