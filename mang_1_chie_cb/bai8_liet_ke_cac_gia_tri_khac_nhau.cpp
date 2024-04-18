#include <bits/stdc++.h>
using namespace std;

void nhapmang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int main()
{
	int a[1000];
	int n, check;
	cin >> n; 
	nhapmang(a, n);
	for(int i = 0; i < n; i++)
	{
		check = 1;
		for(int j = i - 1; j >= 0; j--)
		{
			if(a[i] == a[j])
			{
				check = 0;
				break;
			}
		}
		if(check == 1) cout << a[i] << " ";
	}
	return 0;
}
