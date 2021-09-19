#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cin >> N;
    cout << N / 100 + (N % 100) / 10 + N % 10;
    return 0;
}