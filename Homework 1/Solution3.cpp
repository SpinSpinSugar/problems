#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, K;
    cin >> N >> K;
    cout << N % K;
    return 0;
}