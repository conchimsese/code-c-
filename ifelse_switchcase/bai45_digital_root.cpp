#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	long long n, tong;
	cin >> n;
	if(n < 10)
	{
		cout << n;
	}
	else
	{
		while(n >= 10)
		{
			tong = 0;
			while(n > 0)
			{
				tong += n % 10;
				n /= 10;
			}
			n = tong;
		}
		cout << n;
	}
	return 0;
}
