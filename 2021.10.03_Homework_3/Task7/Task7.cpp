#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int i = 0;
	int n = 0;
	n = 1000;
	cin >> a >> b >> c >> d;
	for (i = 0; i <= n; i++)
	{
		if (i * (i * (a * i + b) + c) + d == 0)
		{
			cout << i << " ";
		}
	}
	return EXIT_SUCCESS;
}