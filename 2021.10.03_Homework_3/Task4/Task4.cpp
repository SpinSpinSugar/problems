#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int i = 0;
	int b = 0;
	double result = 0;
	double j = 0;
	result = 1;
	j = 1;
	cin >> n >> k;
	if (n == 0 || n == 1)
	{
		cout << 1;
	}
	else
	{
		for (i = 1; i <= n - k; i++)
		{
			j = i;
			result *= (k + j) / j;
		}
		b = round(result);
		cout << b;
	}
	return EXIT_SUCCESS;
}