#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int main()
{
	int n; cin >> n;
	int a[1000000];
	long long tong = 0, tich = 1;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		tong  =(tong + a[i]) % mod;
		tich = (tich * a[i] % mod);
	}
	cout << tong % mod << "\n" << tich % mod;
	return 0;
}
