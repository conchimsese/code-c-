#include <iostream>

using namespace std;
int sum_digit(long long n)
{
	int sum = 0;
	if(n >= 10)
	{
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
	long long n;
	cin >> n;
	cout << sum_digit(n) << endl;
	return 0;
}
