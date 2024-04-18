#include <iostream>

using namespace std;
bool chanle(int n)
{
	int sochan = 0, sole = 0;
	while(n != 0)
	{
		if((n % 10) % 2 == 0)
		{
			sochan++;
		}
		else
		{
			sole++;
		}
		n /= 10;
	}
	if(sochan > sole)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool check(int n)
{
	int sum = 0;
	while(n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	if(chanle(sum))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		if(check(i))
		{
			cout << i << " ";
		}
	}
	return 0;
}
