#include<iostream>
#include"myLib.h"

using namespace std;

int main(int* argc, int argv[])
{
	long long n = 0;
	int R = 0;
	cout << "3N+1 Enter the number:" << endl;
	cin >> n;
	cout << three_N_plus_one(n) << endl;
	cout << "Enter the radius of circle:" << endl;
	cin >> R;
	circle(R);
	return EXIT_SUCCESS;
}