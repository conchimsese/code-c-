#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	while(b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}	
	return a;
}
int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << gcd(gcd(a, b), gcd(c, d)) << " " << lcm(lcm(a, b), lcm(c, d));
	return 0;
}
