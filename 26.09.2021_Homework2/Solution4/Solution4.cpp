#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a;
	int b;
	int c;
	int d;
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