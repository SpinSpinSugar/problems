#include <iostream>

using namespace std;

int main(int argc, int argv[])
{
	double a = 0;
	cin >> a;
	long long* b = (long long*)&a;
	long long number = *b;
	int size = sizeof(long long) * 8;
	long long one = 1;
	for (int i = 1; i <= size; ++i)
	{
		long long  digit = (number & (one << (size - i))) >> (size - i);
		cout << digit;
		if (i % 4 == 0)
		{
			cout << " ";
		}
	}
	return EXIT_SUCCESS;
}