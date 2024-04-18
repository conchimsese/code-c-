#include <bits/stdc++.h>
using namespace std;

long long res(long long n)
{
	int max = n;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			max = i;
			while(n % i == 0) n/= i;
		}
	}
	if(n > 1) return n;
	return max;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		cout << res(n) << endl;
	}
	return 0;
}
