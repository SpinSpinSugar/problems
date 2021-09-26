#include<iostream>
#include<locale.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a < b) swap(a, b);
	if (a < c) swap(a, c);
	if (b < c) swap(b, c);

	// a>=b>=c
	if ((a < b + c) && (c > a - b))
	{
		if (a * a < b * b + c * c)
		{
			cout << "acute";
		}
		else
		{
			if (a * a > b * b + c * c)
			{
				cout << "obtuse";
			}
			else
			{
				cout << "right";
			}
		}
	}
	else
	{
		cout << "impossible";
	}
	return EXIT_SUCCESS;
}