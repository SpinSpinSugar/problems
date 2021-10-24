#include<iostream>
#include<locale.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int b = 0;
	int c = 0;
	int temp = 0;
	cin >> a >> b >> c;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		temp = b;
		b = c;
		c = temp;
	}

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