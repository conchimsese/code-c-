#include <bits/stdc++.h>
using namespace std;

int gt(int n)
{
	int res = 1;
	for(int i = 2; i <= n; i++) res *= i;
	return res;
}
int tohop(int k, int n)
{
	return gt(n) / (gt(k) * (gt(n-k)));
}
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cout << tohop(j, i) << " ";
		}
		cout << endl;
	}
	return 0;
}
