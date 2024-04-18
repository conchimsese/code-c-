#include <bits/stdc++.h>
using namespace std;
int scp(long long n)
{
	long long temp = sqrt(n);
	if(temp * temp == n) return 1;
	return 0;
}
int main()
{
	long long a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++)
	{
		if(scp(i)) cout << i << " ";
	}
	return 0;
}
