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
	for(long long i = ceil(sqrt(a)); i <= sqrt(b); i++)
	{
		if(scp(i*i)) cout << i*i << " ";
	}
	return 0;
}
