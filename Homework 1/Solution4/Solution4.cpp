#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int v, t;
    cin >> v >> t;
    cout << (v * t + 109 * v * t * ((2 * t * v + 1) % 2)) % 109; // (v*t + 109*abs(v*t)) - теперь поправка растёт вместе со модулем скорости :) возможны проблемы только с тем, чтоб скорость поместилась в int
    return EXIT_SUCCESS;
}