#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int a, b, n;
	cin >> a >> b >> n;
	int check = 0;
	for(int i = 0; i <= n/a; i++)
	{
		if((n - a*i) % b == 0)
		{
			check = 1;
			break;
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
