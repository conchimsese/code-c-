#include <bits/stdc++.h>
using namespace std;

int checksphenic(long long n)
{
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			cnt++;
			n /= i;
			while(n % i == 0) return 0;
		}
	}
	if(n > 1) cnt++;
	if(cnt == 3) return 1;
	return 0;
}
int main()
{
	long long n;
	cin >> n;
	cout << checksphenic(n);
	return 0;
}
