#include <iostream>

using namespace std;
int main()
{
	int n; long long tong = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		if(i % 3 == 0)
		{
			tong += i;
		}
	}
	cout << tong;
	return 0;
}
