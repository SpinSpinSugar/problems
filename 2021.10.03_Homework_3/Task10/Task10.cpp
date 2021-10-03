#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int i = 0;
	int j = 0;
	cin >> a >> b;
	if (a <= 0 && 0 <= b)
	{
		cout << 0 << " ";
	}
	for (i = a; i <= b; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j * j == i)
			{
				cout << i << " ";
			}
		}
	}
	return EXIT_SUCCESS;
}