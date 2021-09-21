#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << a << " " << b;
    return EXIT_SUCCESS;
}
