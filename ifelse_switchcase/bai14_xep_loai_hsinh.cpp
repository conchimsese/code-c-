#include <iostream>

using namespace std;
int main()
{
	float x1, x2, x3, x4;
	cin >> x1 >> x2 >> x3 >> x4;
	float dtb = (x1 + x2 + x3*2 + x4*3)/7;
	if(dtb >= 8)
	{
		cout << "GIOI";
	}
	else if(dtb >= 6.5 && dtb < 8)
	{
		cout << "KHA";
	}
	else if(dtb >= 5 && dtb < 6.5)
	{
		cout << "TRUNG BINH";
	}
	else 
	{
		cout << "YEU";
	}
	return 0;
}
