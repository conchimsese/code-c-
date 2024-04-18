#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int temp = 3;
	while(temp <= n)
	{
		cout << temp << " ";
		temp += 3;
	}
	cout << endl;
	temp = 0;
	while(temp < n)
	{
		if(temp % 3 == 0 && temp % 5 == 0)
		{
			cout << temp << " ";
		}
		temp++;
	}
	cout << endl;
	for(int i = n; ; i++)
	{
		if(i  % 7 == 0)
		{
			cout << i;
			break;
		}
	}
	cout << endl;
	for(int i = n; ; i--)
	{
		if(i % 9 == 0)
		{
			cout << i;
			break;
		}
	}
	cout << endl;
	for(int i = 1; i <= 2*n -1; i+= 2)
	{
		cout << i << " ";
	}
	return 0;
}
