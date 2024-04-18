#include <bits/stdc++.h>
using namespace std;
bool tn(long long n)
{
	long long sum = 0, tmp = n;
	while(n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return tmp == sum;
}
bool check(long long n)
{
	long long sum = 0;
	int cuoi = n % 10;
	n /= 10;
	while(n >= 10)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return (((n == 2 * cuoi) || (2 * n == cuoi)) && tn(sum));
}
int main()
{
	long long n; cin >> n;
	if(check(n))
	{
		cout << "YES";
	}
	else cout << "NO";
	return 0;
}
