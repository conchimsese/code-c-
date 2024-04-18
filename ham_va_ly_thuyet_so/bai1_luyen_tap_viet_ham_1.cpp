#include <iostream>
#include <cmath>
using namespace std;

bool ham1(int n)
{
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}
int ham2(int n)
{
	int sum = 0;
	while(n)
	{
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}
int ham3(int n)
{
	int sum = 0;
	while(n)
	{
		if((n % 10) % 2 == 0) sum += (n % 10);
		n /= 10;
	}
	return sum;
}
int ham4(int n)
{
	int sum = 0;
	while(n)
	{
		if(ham1(n % 10))
		{
			sum += (n % 10);
		}
		n /= 10;
	}
	return sum;
}
int ham5(int n)
{
	int temp = 0;
	while(n)
	{
		temp = temp * 10 + (n % 10);
		n /= 10;
	}
	return temp;
}
int ham6(int n)
{
	int dem = 0;
	if(n < 2) return dem;
	for(int i = 2; i  <= sqrt(n); i++)
	{
		if(ham1(i) && n % i == 0)
		{
			dem++;
			if(ham1(n / i))
			{
				dem++;
			}
		}
	}
	return dem;
}
int ham7(int n){
    int ans;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ans = i;
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1)
    ans = n;
    return ans;
}
bool ham8(int n)
{
	while(n)
	{
		if((n % 10) == 6) return 1;
		n /= 10;
	}
	return 0;
}
bool ham9(int n)
{
	if(ham2(n) % 8 == 0) return 1;
	return 0;
}
int gt(int n)
{
	int res = 1;
	for(int i = 2; i <= n; i++)
	{
		res *= i;
	}
	return res;
}
int ham10(int n)
{
	int sum = 0;
	while(n)
	{
		sum += gt(n % 10);
		n /= 10;
	}
	return sum;
}
bool ham11(int n)
{
	int temp = n % 10;
	while(n)
	{
		if(temp != n % 10) return 0;
		n /= 10;
	}
	return 1;
}
bool ham12(int n)
{
	int max = n % 10;
	while(n)
	{
		if((n % 10) > max) return 0;
		n /= 10;
	}
	return 1;
}
int count(int n)
{
	int dem  = 0;
	while(n)
	{
		dem++;
		n /= 10;
	}
	return dem;
}
int ham13(int n)
{
	int sum = 0;
	int d = count(n);
	while(n)
	{
		sum += pow((n % 10), d);
		n /= 10;
	}
	return sum;
}
int main()
{
	int n;
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
	cout << ham11(n) << endl;
	cout << ham12(n) << endl;
	cout << ham13(n) << endl;
	return 0;
}
