#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
	while(b)
	{
		long long temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
long long lcm(long long a, long long b)
{
	return (a / gcd(a, b)) * b;
}
int main()
{
	long long a, b;
	cin >> a >> b;
	cout << gcd(a, b) << " " << lcm(a, b);
	return 0;
}
