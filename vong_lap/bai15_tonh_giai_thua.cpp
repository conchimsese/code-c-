#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	long long tich = 1;
	for(int i = 1; i <= n; i++)
	{
		tich *= i;
	}
	cout << tich;
	return 0;
}
