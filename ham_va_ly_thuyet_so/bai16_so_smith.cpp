#include <bits/stdc++.h>
using namespace std;

int sum(long long n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int check(long long n)
{
	int sum1 = sum(n);
	int sum2 = 0;
	long long tmp = n;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			while(n % i == 0)
			{
				sum2 += sum(i);
				n/= i; 
			}
		}
	}
	if(n == tmp) return 0;
	if(n != 1) sum2 += sum(n);
	return sum1 == sum2;
}
int main()
{
	long long n;
	cin >> n;
	if(check(n)) cout << "YES";
	else cout << "NO";
	return 0;
}
