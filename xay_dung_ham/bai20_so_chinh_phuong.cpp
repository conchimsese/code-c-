#include <bits/stdc++.h>
using namespace std;
int scp(long long n)
{
	long long temp = sqrt(n);
	if(temp * temp == n) return 1;
	return 0;
}
int main()
{
	long long n;
	cin >> n;
	if(scp(n))cout << "YES";
	else cout << "NO";
	return 0;
}
