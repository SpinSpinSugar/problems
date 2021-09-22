#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cin >> N;
    cout << N - (N * (2 * N + 1)) % 2 + 2;
    return EXIT_SUCCESS;
}
