#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int d = 0;
	int c = 0;
	int i = 0;
	int checker = 0;
	cin >> a >> b >> c >> d;
	for (i = a; i <= b; i++)
	{
		if (i % d == c && checker == 0)
		{
			cout << i;
			checker += 1;
		}
		else if (i % d == c)
		{
			cout << " " << i;
		}
	}
	return EXIT_SUCCESS;
}