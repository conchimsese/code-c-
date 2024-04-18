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
	int demchan = 0, demle = 0, tongchan = 0, tongle = 0;
	int n;
	cin >> n;
	nhapmang(a, n);
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0) 
		{
			demchan++;
			tongchan += a[i];
		}
		else
		{
			demle++;
			tongle+= a[i];
		}
	}
	cout << demchan << endl << demle << endl << tongchan << endl << tongle;
	return 0;
}
