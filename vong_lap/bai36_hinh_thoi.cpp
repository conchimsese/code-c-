#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= 2*n - 1; j++)
		{
			if(j == n-i+1)
			{
				for(int k = n-i+1; k <= n+i-1; k++, j++)
				{
					cout << "* ";
				}
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	for(int i = n-1; i > 0; i--)
	{
		for(int j = 1; j <= 2*n -1; j++)
		{
			if(j == n-i+1)
			{
				for(int k = n-i+1; k <= n+i-1; k++, j++)
				{
					cout << "* ";
				}
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
