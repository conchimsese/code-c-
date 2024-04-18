#include <bits/stdc++.h>
using namespace std;
int cnt[1000000];
void phantich(int a[], int n)
{
	int max = 0, max_value = 0;
	for(int i = 0; i < n; i++)
	{
		if(cnt[a[i]] > max)
		{
			max = cnt[a[i]];
			max_value = a[i];
		}
	}
	cout << max_value << " " << max;
}
int main()
{
	int n; cin >> n;
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		cnt[a[i]]++;
	}
	phantich(a, n);
	return 0;
}
