#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = n; i >= 1; i--)
	{
		for(int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j <= (n-i))
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	cout << endl;
	for(int i = n-1; i >= 0; i--)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j >= (n-i))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
	for(int i = n-1; i >= 1; i--)
	{
		for(int j = 1; j <= n-1; j++)
		{
			if(j == 1 || j == (n-i))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for(int j = 1; j <= n; j++)
	{
		cout << "*";
	}
	return 0;
}
