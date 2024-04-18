#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for(int i = n; i >= 0; i--)
	{
		cout << i << " ";
	}
	cout << endl;
	for(int i = 0; i <= n; i++)
	{
		if(i % 2 == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	for(int i = 0; i <= n; i++)
	{
		if(i % 2 != 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		if(i % 4 == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	for(char x = 'a'; x < n + 97; x++)
	{
		cout << x << " ";
	}
	cout << endl;
	for(int i = n-1; i >= 0; i--)
	{
		char x = 'z';
		x -= i;
		cout << x << " ";
	}
	return 0;
}
