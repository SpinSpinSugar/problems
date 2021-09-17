#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int v, t;
    cin >> v >> t;
    cout << (v * t + 109*100000) % 109;
    return 0;
}