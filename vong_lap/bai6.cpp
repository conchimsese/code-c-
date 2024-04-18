#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	long long n;
	int temp;
	cin >> n;
	long long tong = 0;
	while(n >= 10)
	{
		temp = n % 10;
		tong += abs(temp - (n % 100)/10);
		n /= 10;
	}
	cout << tong;
	return 0;
}
