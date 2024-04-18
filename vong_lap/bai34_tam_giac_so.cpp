#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		int result = i;
		for(int j = 1; j <= 2*n - 1;)
		{
			if(j == n - i + 1)
			{
				for(int k = j; k < n +1; k++, j++)
				{
					cout << result++ << " ";
				}
			}
			else if(j >= n && j <= n + i - 1)
			{
				result--;
				for(int k = j; k < n + i; k++, j++)
				{
					cout << --result << " ";
				}
			}
			else if(j < n + 1 - i || j > n - 1 + i)
			{
				cout << "  ";
				j++;
			}
		}
		cout << endl;
	}
	return 0;
}
