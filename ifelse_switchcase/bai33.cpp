#include <iostream>

using namespace std;
int main()
{
	long long a, b, c, n;
	cin >> a >> b >> c >> n;
	long long result = (a + b + c + n) / 3;
	if((a+b+c+n) % 3 == 0 && result >= a && result >= b && result >= c)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
