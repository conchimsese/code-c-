#include <iostream>

using namespace std;
bool check(long long n)
{
	if(n >= 10)
	{
		int sum = 0;
		while(n != 0)
		{
			sum += n % 10;
			n /= 10;
		}
		if(sum % 10 == 8)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if(n == 8)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	long long x;
	cin >> x;
	if(check(x) == true)
	{
		cout << "28tech";
	}
	else
	{
		cout << "29tech";
	}
	return 0;
}
