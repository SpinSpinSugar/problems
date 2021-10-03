#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	cin >> N;
	for (i = 1; i <= N; i++)
	{
		cin >> n;
		sum += n;
	}
	cout << sum;
	return EXIT_SUCCESS;
}