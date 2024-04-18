#include <iostream>

using namespace std;
bool so_giam(int n)
{
	while(n >= 10)
	{
		int temp = n % 10;
		n /= 10;
		if((n % 10) <= temp)
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
	bool found = false;
	for(int i = a; i <= b; i++)
	{
		if(so_giam(i))
		{
			cout << i << " ";
			found = true;
		}
	}
	if(!found)
	{
		cout << "28tech\n";
	}
	return 0;
}
