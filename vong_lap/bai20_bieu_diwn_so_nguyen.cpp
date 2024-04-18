#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n == 1)
	{
		cout << -1;
		return 0;
	}
	else
	{
		cout << n/2 << endl;
		if(n % 2 == 0)
		{
			for(int i = 0; i < n/2; i++)
			{
				cout << 2 << " ";
			}
		}
		else
		{
			for(int i = 0; i < n/2 - 1; i++)
			{
				cout << 2 << " ";
			}
			cout << 3;
		}
	}
	return 0;
}
