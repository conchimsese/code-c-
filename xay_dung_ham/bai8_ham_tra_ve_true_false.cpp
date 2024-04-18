#include <iostream>
 
 using namespace std;
 bool so_dep(int n)
 {
	int sochan = 0, sole = 0;
	while(n != 0)
	{
		if((n % 10) % 2 == 0)
		{
			sochan += 1;
		}
		else
		{
			sole += 1;
		}
		n /= 10;
	}
	if(sochan == sole)
	{
		return 1;
	}
	else
	{
		return 0;
	}
 }
 int main()
 {
	int n;
	cin >> n;
	for(int i = 10; i <= n; i ++)
	{
		if(so_dep(i) == true)
		{
			cout << i << " ";
		}
	}
	return 0;
 }
