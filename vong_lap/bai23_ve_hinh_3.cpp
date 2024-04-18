#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem = 1;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << dem++ << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++)
	{
		int temp = i;
		for(int j = 0; j < n; j++)
		{
			cout << temp++ << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j > (n-i))
			{
				cout << i;
			}
			else
			{
				cout << "~";
			}
		}
		cout << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++)
	{
		int temp = n-1;
		int result = i + temp;
		for(int j = 1; j <= i; j++)
		{
			if(j == 1)
			{
				cout << i << " ";
			}
			else
			{
				cout << result << " ";
				temp--;
				result += temp;
			}
		}
		cout << endl;
	}
	return 0;
}
