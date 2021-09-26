#include<iostream>
#include<locale.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	int c;
	int d;
	cin >> a >> b >> c >> d;
	if ((a == 0) && (b == 0))
	{
		cout << "INF";
	}
	if (((-b % a) == 0) && (b / a != d / c))
	{
		if (-d % c != 0)
		{
			cout << -b / a;
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