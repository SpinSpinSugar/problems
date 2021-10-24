#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;
	if ((a == 0) && (b == 0))
	{
		cout << "INF";
	}
	else if (a != 0)
	{
		if (((b % a) == 0) && ((b * c) != (d * a)))
		{
			cout << (-1) * b / a;
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}