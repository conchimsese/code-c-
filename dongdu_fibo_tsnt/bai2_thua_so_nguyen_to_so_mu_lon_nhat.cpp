#include <bits/stdc++.h>
using namespace std;

void check(long long n)
{
	int max = 0, tmp;
	long long temp = n;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			int dem = 0;
			while(n % i == 0)
			{
				dem++;
				n /= i;
			}
			if(max < dem)
			{
				max = dem;
				tmp = i;
			}
		}
	}
	if(n == temp) cout << n << " " << 1; 
	else cout << tmp << " " << max;
}
int main()
{
	long long n;
	cin >> n;
	check (n);
	return 0;
}
