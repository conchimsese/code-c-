#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cout << "Hello 28tech\n";
	}
	for(int i = 0; i < n; i++)
	{
		cout << i+1 << " ";
	}
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for(int i = n; i >= 1; i--)
	{
		cout << i << " ";
	}
	cout << endl;
	for(int i = n-1; i >= 0; i--)
	{
		cout << i << " ";
	}
	return 0;
}
