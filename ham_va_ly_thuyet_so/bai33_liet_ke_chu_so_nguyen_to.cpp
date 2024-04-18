#include <bits/stdc++.h>
using namespace std;

int d[10];
void lietke1(long long n, int d[])
{
	long long temp = n;
	long long sum = 0;
	while(n)
	{
		d[n % 10]++;
		n /= 10; 
	}	
	for(int i = 0; i < 10; i++)
	{
		if(d[i] && (i == 3 || i == 2 || i == 5 || i == 7)) cout << i << " " << d[i] << endl;
	}
	cout << endl;
	while(temp)
	{
		sum = sum * 10 + temp % 10;
		temp /= 10;
	}
	while(sum)
	{
		int i = sum % 10;
		if(d[i] && (i == 2 || i == 3 || i == 5 || i == 7))
		{
			cout << i << " " << d[i] << endl;
			d[i] = 0;
		}
		sum /= 10;
	}
}
int main()
{
	long long n;
	cin >> n;
	lietke1(n, d);
	return 0;
}
