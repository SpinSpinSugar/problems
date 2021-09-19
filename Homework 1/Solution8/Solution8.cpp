#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, a1, b1, c1;
    cin >> a >> b >> c >> a1 >> b1 >> c1;
    cout << 3600 * a1 + 60 * b1 + c1 - 3600 * a - 60 * b - c;
    return 0;
}