#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	long long result = 0;
	for(int i = 1; i <= n; i++)
	{
		long long result2 = 1;
		for(int j = 1; j <= i; j++)
		{
			result2 *= j;
		}
		result += result2;
	}
	cout << result;
	return 0;
}
