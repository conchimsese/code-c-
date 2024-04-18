#include <iostream>

using namespace std;
int main()
{
	int n, x;
	long long tong = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x % 2 == 0)
		{
			tong += x;
		}
	}
	cout << tong;
	return 0;
}
