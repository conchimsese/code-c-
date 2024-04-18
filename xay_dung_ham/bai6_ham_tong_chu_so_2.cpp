#include <iostream>

using namespace std;
int sum_digit(long long n)
{
	if(n >= 10)
	{
		int sum = 0;
		while(n != 0)
		{
			sum += n % 10;
			n /= 10;
		}
		return sum;
	}
	else
	{
		return n;
	}
}
int main()
{
	int n;
	long long x;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		cout << sum_digit(x) << " ";
	}
	return 0;
}
