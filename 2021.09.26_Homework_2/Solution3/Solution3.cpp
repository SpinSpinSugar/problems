#include<iostream>
#include<locale.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int k = 0;
	int m = 0;
	int n = 0;
	int t = 0;
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
	return EXIT_SUCCESS;
}