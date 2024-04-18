#include <bits/stdc++.h>
using namespace std;

bool tn(int n)
{
	int tmp = n;
	int res = 0;
	while(n)
	{
		res = res * 10 + (n % 10);
		n /= 10;
	}
	if(res == tmp) return 1;
	return 0;
}
bool uocnguyen(int n)
{
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			dem++;
			if(dem == 3) return 1;
			while(n % i == 0)
			{
				n /= i;
			}
		}
	}
	if(n > 1 && dem == 2) return 1;
	return 0;
}
int main()
{
	int a, b; cin >> a >> b;
	int check = 0;
	for(int i = a; i <= b; i++)
	{
		if(tn(i) && uocnguyen(i)){
			check = 1;
			cout << i << " ";
		}
	}
	if(check == 0) cout << -1;
	return 0;
}
