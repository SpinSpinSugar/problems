#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int number = 0;
	int p = 0;
	int n = 0;
	int z = 0;
	int i = 0;
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cin >> number;
		if (number > 0)
		{
			p += 1;
		}
		else if (number == 0)
		{
			z += 1;
		}
		else
		{
			n += 1;
		}
	}
	cout << z << " " << p << " " << n;
	return EXIT_SUCCESS;
}