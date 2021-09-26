#include<iostream>
#include<locale.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int k;
	int m;
	int n;
	cin >> k >> m >> n;
	if ((n % k) != 0)
	{
		if ((n % k) <= (k / 2))
		{
			cout << (2 * (n - k + 1) / k + 1) * m;
		}
		else
		{
			cout << (n / k) * m * 2 + m * 2;
		}
	}
	else
	{
		cout << (n / k) * m * 2;
	}
}