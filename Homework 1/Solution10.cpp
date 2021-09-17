#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, count;
    cin >> a >> b;
    count = 0;
    while (a >= b) // Алгоритм Евклида
    {
        a -= b;
        count += 1;
    }
    cout << count;
    return 0;
}