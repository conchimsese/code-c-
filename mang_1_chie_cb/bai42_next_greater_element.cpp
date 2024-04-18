#include <bits/stdc++.h>
using namespace std;
void phantich(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int check = 0;
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] > a[i])
			{
				check = 1;
				cout << a[j] << " ";
				break;
			}
		}
		if(!check) cout << -1 << " ";
	}
}
int main()
{
	int n; cin >> n;
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	phantich(a, n);
	return 0;
}
