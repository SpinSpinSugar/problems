#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float N, y;
    cin >> N;
    y = N * N;
    cout << y * (y + N + 1) + N + 1;
    return 0;
}