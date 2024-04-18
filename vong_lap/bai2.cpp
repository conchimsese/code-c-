#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i <= n; i+=3)
	{
		cout << i << " ";
	}
	cout << endl;
	for(int i = 0; (long long)pow(2, i) <= n; i++)
	{
		cout << (long long)pow(2, i) << " ";
	}
	cout << endl;
	for(int i = n; ; i++)
	{
		if(i % 17 == 0)
		{
			cout << i << endl;
			break;
		}
	}
	for(int i = n - 1; ; i--)
	{
		if(i % 7 == 0)
		{
			cout << i << endl;
			break;
		}
	}
	int tong = 1;
	for(int i = 1; tong <= n; i++)
	{
		cout << tong  << " ";
		tong += i;
	}
	return 0;
}
