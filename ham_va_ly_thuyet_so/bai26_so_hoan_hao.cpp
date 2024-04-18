#include <bits/stdc++.h>
using namespace std;

bool nt(long long n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return 0;
	}
	return n > 1;
}
bool checkhh(long long p)
{
	for(int i = 1; i <= 33; i++)
	{
		if(nt(pow(2, i) - 1) && nt(i)) 
		{
			long long tmp = pow(2, i-1) * (pow(2, i) - 1);
			if(p == tmp) return 1;
		}
	}
	return 0;
}
int main()
{
	long long n;
	cin >> n;
	if(checkhh(n)) cout << "YES";
	else cout << "NO";
	return 0;
}
