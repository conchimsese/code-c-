#include <bits/stdc++.h>
using namespace std;
void difference(int f[], int a[], int n)
{
	set<int> se;
	int k = n-1;
	for(int i = n-1; i >= 0; i--)
	{
		se.insert(a[i]);
		f[k--] = se.size(); 
	}
}
int main()
{
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int f[n];
	difference(f, a, n);
	int q; cin >> q;
	while(q--)
	{
		int l; cin >> l;
		cout << f[l] << endl;
	}
}
