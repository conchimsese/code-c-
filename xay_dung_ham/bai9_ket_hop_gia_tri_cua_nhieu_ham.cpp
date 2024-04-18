#include <iostream>

using namespace std;
bool chua6(int n)
{
	while(n != 0)
	{
		if((n % 10) == 6)
		{
			return 1;
		}
		n /= 10;
	}
	return 0;
}
bool tongchan(int n)
{ 
	int sum = 0;
	while(n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	if(sum % 2 == 0)
	{
		return 1;
	}
	return 0;
}
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
	if(sole > sochan)
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
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++)
	{
		if(chua6(i) && tongchan(i) && chanle(i))
		{
			cout << i << " ";
		}
	}
	return 0;
}
