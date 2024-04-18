#include <bits/stdc++.h>
using namespace std;
long long sum(long long n)
{
	long long sum = 0;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			sum += i;
			if(i != (n/i)) sum += (n/i);
		}
	}
	return sum;
}
int main()
{
	long long n;
	cin >> n;
	cout << sum(n);
	return 0;
}
