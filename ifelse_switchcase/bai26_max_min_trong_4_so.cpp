#include <iostream>

using namespace std;
int main()
{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	
	long long max1 = (a >= b) ? a : b;
	long long max2 = (c >= d) ? c : d;
	if(max1 < max2)
	{
		cout << max2 << " ";
	}
	else
	{
		cout << max1 << " ";
	}
	long long min1 = (a <= b) ? a : b;
	long long min2 = (c <= d) ? c : d;
	if(min1 < min2)
	{
		cout << min1;
	}
	else
	{
		cout << min2;
	}
	return 0;
}
