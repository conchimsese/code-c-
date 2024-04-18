#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	long long tong = 0;
	for(long long i = 1; i <= 2*n - 1; i+=2)
	{
		tong += i;
	}
	cout << tong;
	return 0;
}
