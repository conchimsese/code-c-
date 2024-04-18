#include <iostream>

using namespace std;
bool so_tang(int n)
{
	while(n >= 10)
	{
		int temp = n % 10;
		n /= 10;
		if(temp <= (n % 10))
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++)
	{
		if(so_tang(i))
		{
			cout << i << " ";
		}
	}
	return 0;
}
