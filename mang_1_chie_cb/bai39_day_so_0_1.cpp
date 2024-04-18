#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[10000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i])
		{
			int dem1 = 0;
			while(a[i] && i < n)
			{
				dem1++;
				i++;
			}
			cout << dem1 << " ";
		}
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0)
		{
			int dem = 0;
			while(a[i] == 0 && i < n)
			{
				dem++;
				i++;
				
			}
			cout << dem << " ";
		}
	}
	return 0;
}
