#include <iostream>

using namespace std;
int main()
{
	int n, result;
	cin >> n;
	if(n >= 1000)
	{
		result = n * 4500 + 1200000;
	}
	else if(n >= 800 && n < 1000)
	{
		result = n * 3900 + 900000;
	}
	else if(n >= 500 && n < 800)
	{
		result = n * 3700 + 800000;
	}
	else
	{
		result = n * 3300;
	}
	cout << result;
	return 0;
}
