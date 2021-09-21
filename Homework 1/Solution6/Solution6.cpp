#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cin >> N;
    cout << (N / 2) * 2 + 2 * ((((2 * N + 1) % 2) + 1) / 2 + ((N + 1) % 2) * (((2 * N + 1) % 2) - 1) / 2); // костылим без if :-)
    return EXIT_SUCCESS;
}