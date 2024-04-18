#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	long long n, tong = 0;
	cin >> n;
	for(long long i = 1; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			tong += i + n/i;
		}
		if(i * i == n)
		{
			tong -= i;
		}
	}
	cout << tong;
	return 0;
}
