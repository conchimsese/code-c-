#include <iostream>

using namespace std;
int main()
{
	int n, a1, a2, a3, b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
	int a = a1 + a2  + a3;
	int b = b1 + b2 + b3;
	if(a % 5 == 0)
	{
		a = a/5;
	}
	else
	{
		a = a/5 + 1;
	}
	if(b % 10 == 0)
	{
		b = b/10;
	}
	else
	{
		b = b/10 + 1;
	}
	if(a+b <= n)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES";
	}
	return 0;
}
