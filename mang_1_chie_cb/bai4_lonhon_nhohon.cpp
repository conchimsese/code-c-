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
	int x; cin >> x;
	int demnho = 0, demlon = 0;
	for(int i = 0; i < n; i++)	
	{
		if(a[i] < x) demnho++;
		else if(a[i] > x) demlon++;
	}
	cout << demnho << "\n" << demlon;
	return 0;
}
