#include <iostream>

using namespace std;
int main()
{
	float w, h, result;
	cin >> w >> h;
	h /= 100;
	result = w / (h * h);
	if(result < 18.5)
	{
		cout << "Under weight";
	}
	else if(result >= 18.5 && result < 25)
	{
		cout << "Normal";
	}
	else if(result >= 25 && result < 30)
	{
		cout << "Over weight";
	}
	else if(result >= 30 && result < 35)
	{
		cout << "Obesity 1";
	}
	else if(result >= 35 && result < 40)
	{
		cout << "Obesity 2";
	}
	else
	{
		cout << "Extreme obesity";
	}
	return 0;
}
