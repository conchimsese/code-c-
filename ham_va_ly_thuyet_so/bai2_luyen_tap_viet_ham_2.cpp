#include <iostream>
#include <cmath>
using namespace std;

int ham1(long long n)
{
	if(n == 0) return 1;
	int dem = 0;
	while(n)
	{
		if((n % 10) % 2 == 0) dem++;
		n /= 10;
	}
	return dem % 2 != 0;
}
int ham2(long long n)
{
	if(n == 0) return 1;
	int demchan = 0, demle = 0;
	while(n)
	{
		if((n % 10) % 2 == 0) demchan++;
		else demle++;
		n /= 10;
	}
	return demchan > demle;
}
int ham3(long long n)
{
	int temp = n % 10;
	while(n >= 10) n /= 10;
	return temp == n;
}
int ham4(long long n)
{
	if(n == 0) return 0;
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return (sum % 10) == 8;
}
int ham5(long long n)
{
	if(n == 0) return 0;
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	for(int i = 2; i <= sqrt(sum); i++)
	{
		if(sum % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int ham6(long long n)
{
	while(n >= 10)
	{
		if(abs((n % 10) - ((n % 100) / 10)) != 1)
		{
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int ham7(long long n)
{
	int max = n % 10;
	while(n >= 10)
	{
		if(n % 10 > max) max = (n % 10);
		n /= 10;
	}
	return n > max;
}
int fibo(long long n)
{
	if(n < 2) return 1;
	long long fb1 = 0, fb2 = 1;
	for(int i = 2; i <= 92; i++)
	{
		long long fb = fb1 + fb2;
		if(n == fb) return 1;
		fb1 = fb2;
		fb2 = fb;
	}
	return 0;
}
int ham8(long long n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return fibo(sum);
}
int sothuannghich(long long n)
{
	long long temp = n;
	int res = 0;
	while(n)
	{
		res = res * 10 + (n % 10);
		n /= 10;
	}
	return res == temp;
}
int ham9(long long n)
{
	long long sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;	
	}
	return sothuannghich(sum);
}
int ham10(long long n)
{
	while(n)
	{
		int t = n % 10;
		if(t != 6 && t != 8 && t != 0 )
		{
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		cout << ham1(n) << endl;
		cout << ham2(n) << endl;
		cout << ham3(n) << endl;
		cout << ham4(n) << endl;
		cout << ham5(n) << endl;
		cout << ham6(n) << endl;
		cout << ham7(n) << endl;
		cout << ham8(n) << endl;
		cout << ham9(n) << endl;
		cout << ham10(n) << endl;
	}
	return 0;
}
