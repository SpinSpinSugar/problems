#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    cin >> a >> b;
    cout << (a + b + (a - b) * ((2 * (a-b) + 1) % 2)) / 2;
    return 0;
}