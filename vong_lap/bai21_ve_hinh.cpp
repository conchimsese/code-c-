#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		if(i == 0 || i == n - 1)
		{
			for(int j = 0; j < n ; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else
		{
			for(int j = 0; j < n; j++)
			{
				if(j == 0 || j == n - 1)
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
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		if(i == 0 || i == n - 1)
		{
			for(int j = 0; j < n ; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else
		{
			for(int j = 0; j < n; j++)
			{
				if(j == 0 || j == n - 1)
				{
					cout << "*";
				}
				else
				{
					cout << "#";
				}
			}
			cout << endl;
		}
	}
	cout << endl;
	for(int i = 1; i <= n; i++)
	{
		if(i == 1 || i == n)
		{
			for(int j = 0; j < n; j++)
			{
				cout << i << " ";
			}
			cout << endl;
		}
		else
		{
			for(int j = 0; j < n; j++)
			{
				if(j == 0 || j == n-1)
				{
					cout << i << " ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}
