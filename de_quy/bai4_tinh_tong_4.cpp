#include <bits/stdc++.h>
using namespace std;
long long sum(int n)
{
	if(n == 1) return -1;
	if(n % 2)
	{
		return -n + sum(n-1);
	}
	return n + sum(n-1);
}
int main()
{
	int n; cin >> n;
	long long tong = sum(n);
	cout << tong;
	return 0;
}
