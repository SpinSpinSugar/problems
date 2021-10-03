#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int i = 0;
	int result = 0;
	result = 1;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		result *= 2;
	}
	cout << result;
	return EXIT_SUCCESS;
}