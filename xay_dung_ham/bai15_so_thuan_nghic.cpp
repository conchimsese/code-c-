#include <iostream>
#include <cmath>

using namespace std;
bool palindrome(int n)
{
	int result = 0;
	int temp = log10(n) + 1;
	int temp1 = n;
	while(n)
	{
		result += (n % 10) * pow(10, temp);
		n /= 10;
		temp--;
	}
	if(result && (result / 10) == temp1)
	{
		return 1;
	}
	else if(result == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int a, b;
	cin >> a >> b;
	for(int i = a; i <+ b; i++)
	{
		if(palindrome(i))
		{
			cout << i << " ";
		}
	}
	return 0;
}
