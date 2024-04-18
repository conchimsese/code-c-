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
	int n;
	cin >> n;
	nhapmang(a, n);
	for(int i = 0; i < n; i++)
	{
		int check = 1;
		int dem = 1;
		for(int j = 0; j < i; j++)
		{
			if(a[i] == a[j]) 
			{
				check = 0;
				break;
			}
		}
		if(check == 1)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[i] == a[j]) dem++;
			}
			cout << a[i] << " " << dem << endl;
		}
	}
	return 0;
}
