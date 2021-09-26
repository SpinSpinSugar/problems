#include<iostream>
#include<locale.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int x1;
	int y1;
	int x2;
	int y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if ((x1 == x2) || (y1 == y2) || (abs(x1 - x2) == abs(y1 - y2)))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}