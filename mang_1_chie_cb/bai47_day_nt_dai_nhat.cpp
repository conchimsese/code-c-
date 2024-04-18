#include <bits/stdc++.h>
using namespace std;
int nt[1000001];
int main()
{
	int n; cin >> n;
	for(int i = 2; i < 1000001; i++) nt[i] = 1;
	for(int i = 2; i <= sqrt(1000001); i++)
	{
		if(nt[i])
		{
			for(int j = i * i; j < 1000001; j+= i)
			{
				nt[j] = 0;
			}
		}
	}
	int a[n + 1];
	a[n] = 0;
	for(int i = 0; i < n; i++) cin >> a[i];
	long long sum = 0, dem = 0, index = -1;
	long long sum_max = -1, dem_max = -1;
	for(int i = 0; i <= n; i++)
	{
		if(nt[a[i]])
		{
			sum += a[i];
			dem++;
			
		}
		else
		{
			if(dem > dem_max)
			{
				dem_max = dem;
				sum_max = sum;
				index = i - 1;
 			}
 			else if(dem == dem_max && sum > sum_max)
 			{
 				sum_max = sum;
 				index = i - 1;
			}
			dem = 0;
			sum = 0;
			
		}
		
	}
	if(index == -1) cout << "NOT FOUND";
	else
	{
		cout << dem_max << endl;
		for(int i = index - dem_max + 1; i <= index; i++)
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}
