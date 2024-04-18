#include <bits/stdc++.h>
using namespace std;
int main()
{
	char h[] = {'2', '8', 't', 'e', 'c', 'h'};
	int idx = 0;
	int n; cin >> n;
	char a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++)
	{
		if(a[i] == h[idx])
		{
			idx++;
		}
		if(idx == 6) break;
	}
	if(idx == 6) cout << "28TECH";
	else cout << "HCET82";
	return 0;
}
