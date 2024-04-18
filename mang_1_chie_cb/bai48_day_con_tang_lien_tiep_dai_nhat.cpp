#include <bits/stdc++.h>
using namespace std;
int lenght(int a[], int n)
{
	int dem = 1, dem_max = -1;
	for(int i = 1; i <= n; i++)
	{
		if(a[i] > a[i-1])
		{
			dem++;
		}
		else
		{
			dem_max = max(dem, dem_max);
			dem = 1;
		}
	}
	return dem_max;
}
int main()
{
	int t; cin >> t;
	int tt = 1;
	while(t--)
	{
		int n; cin >> n;
		int a[n+1];
		a[n] = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		int dem = 1;
		int ans = lenght(a, n);
		cout << "Test #" << tt << " :\n";
		cout << ans << endl;
		for(int i = 1; i <= n; i++)
		{
			if(a[i] > a[i-1])
			{
				dem++;
			}
			else
			{
				if(dem == ans)
				{
					for(int j = i - ans; j < i; j++)
					{
						cout << a[j] << " ";
					}
					cout << endl;
				}
				dem = 1;
			}
		}
		tt++;
	}
	return 0;
}
