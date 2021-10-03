#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int factorial = 0;
	factorial = 1;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	cout << factorial;
	return EXIT_SUCCESS;
}