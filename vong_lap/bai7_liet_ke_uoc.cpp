#include <iostream>

using namespace std;
int main()
{
	int n, tong = 1;
	cin >> n;
	for(int i = 1; i <= n/2; i++)
	{
		if(n % i == 0)
		{
			tong += 1;
		}
	}
	cout << tong << endl;
		for(int i = 1; i <= n/2; i++)
	{
		if(n % i == 0)
		{
			cout << i << " ";
		}
	}
	cout << n;
	return 0;
}
