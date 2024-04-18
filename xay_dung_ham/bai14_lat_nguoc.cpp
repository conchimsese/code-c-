#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
ll rev(ll n)
{
	ll result = 0;
	int temp = log10(n) + 1;
	while(n)
	{
		result += (n % 10) * pow(10, temp);
		n /= 10;
		temp--;
	}
	if(result)
	{
		return result / 10;
	}
	return 0;
}
int main()
{
	ll n;
	cin >> n;
	cout << rev(n);
	return 0;
}
