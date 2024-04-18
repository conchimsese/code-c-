#include <iostream>

using namespace std;
int main()
{
	long long n, tong = 0;
	cin >> n;
	for(long long i = 2; i <= 2*n; i+= 2)
	{
		tong += i;
	}
	cout << tong;
	return 0;
}
