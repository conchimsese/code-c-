#include <bits/stdc++.h>
using namespace std;

long long last_number(int n, int m, int k)
{
	long long res = 1;
	long long mod = (int)pow(10, k);
	for(int i = 0; i < m; i++)
	{
		res *= n;
		res %= mod;
	}
	return res;
}
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	cout << last_number(n, m, k);
	return 0;
}
