#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	long long n, m;
	cin >> n >> m;
	if(n < m)
	{
		cout << "-1";
	}
	else if(m <= n && m >= n/2)
	{
		cout << m;
	}
	else
	{
		if(n % 2 == 0)
		{
			long long t = n/2;
			if(t % m == 0)
			{
				cout << t;
			}
			else 
			{
				long long kq = (floor(t/m)+1) * m;
				cout << kq;
			}
		}
		else
		{
			long long t = n/2 + 1;
			if(t % m == 0)
			{
				cout << t;
			}
			else 
			{
				long long kq = (floor(t/m)+1) * m;
				cout << kq;
			}
		}
	}
	return 0;
}
