#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int counter = 0;
	int counter_2 = 0;
	int counter_3 = 0;
	int i = 0;
	int j = 0;
	cin >> n;
	i = 1;
	for (i = 1; i <= n; i += counter_3)
	{
		counter += 1;
		for (j = 1; j <= counter; j++)
		{
			if (i + counter_2 <= n)
			{
				cout << i + counter_2 << " ";
			}
			counter_2 += 1;
		}
		counter_3 = counter_2;
		counter_2 = 0;
		cout << endl;
	}
}