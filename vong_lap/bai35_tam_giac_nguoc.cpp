#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = n-1; i >= 0; i--)
	{
		for(int j = 0; j < 2*n-1; j++)
		{
			if(j == n - i - 1)
			{
				for(int k = j; k < n+i; k++)
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
