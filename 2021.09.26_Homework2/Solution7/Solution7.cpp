#include<iostream>
#include<locale.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n;
	int m;
	int k;
	cin >> n >> m >> k;
	if (((k % n == 0) || (k % m == 0)) && (k < n * m))
	{
		cout << " YES";
	}
	else
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}