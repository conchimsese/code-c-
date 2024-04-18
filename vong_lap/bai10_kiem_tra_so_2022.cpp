#include <iostream>

using namespace std;
int main()
{
	int n, check = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if(x == 2022)
		{
			check = 1;
		}
	}
	if(check == 1)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
