#include<iostream>
#include<locale.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int k;
	int m;
	int n;
	int t;
	cin >> k >> m >> n;
	n = 2 * n;
	t = (n / k) * m;
	if (n <= k)
	{
		cout << 2 * m;
	}
	else
	{
		if (n % k != 0)
		{
			t += m;
		}
		cout << t;
	}
}