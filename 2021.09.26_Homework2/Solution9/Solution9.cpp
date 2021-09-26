#include<iostream>
#include<locale.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int M;
	int N;
	int x;
	int y;
	cin >> M >> N >> x >> y;
	if (x + 1 <= M)
	{
		cout << x + 1 << " " << y << endl;
	}
	if (x > 1)
	{
		cout << x - 1 << " " << y << endl;
	}
	if (y + 1 <= N)
	{
		cout << x  << " " << y + 1 << endl;
	}
	if (y > 1)
	{
		cout << x << " " << y - 1 << endl;
	}
	return EXIT_SUCCESS;
}