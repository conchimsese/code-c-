#include <bits/stdc++.h>
using namespace std;

void tsnt1(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			cout << i << " ";
			while(n % i == 0) n /= i;
		}
	}
	if(n > 1) cout << n;
}
void tsnt2(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			int dem = 0;
			while(n % i == 0)
			{
				dem++;
				n /= i;
			}
			cout << "(" << i << ", " << dem << ") ";
		}
	}
	if(n > 1) cout << "(" << n << ", " << 1 << ")";
}
void tsnt3(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			while(n % i == 0 && n > i)
			{
				cout << i << " x ";
				n /= i;
			}
		}
	}
	if(n > 1) cout << n;
}
int main()
{
	int n;
	cin >> n;
	tsnt1(n);
	cout << endl;
	tsnt2(n);
	cout << endl;
	tsnt3(n);
	return 0;
}
