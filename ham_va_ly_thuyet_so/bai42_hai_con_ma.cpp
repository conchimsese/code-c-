#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n; cin >> n;
	for(long long i = 1; i <= n; i++)
	{
		cout << (((i*i - 1) * i*i) / 2) - (4 * (i - 1) * (i - 2)) << endl;
	}
	return 0;
}
