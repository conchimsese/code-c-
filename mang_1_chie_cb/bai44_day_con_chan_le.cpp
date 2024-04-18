#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		int demchan = 0, demle = 0;
		for(int j = i; j < n; j++)
		{
			if(a[j] % 2) demle++;
			else demchan++;
			if(demchan == demle) dem++;
		}
	}
	cout << dem;
	return 0;
}
