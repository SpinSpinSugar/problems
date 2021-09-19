#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    cin >> N;
    cout << "The next number for the number" << " " << N << " " << "is" << " " << N + 1 << "." << endl;
    cout << "The previous number for the number" << " " << N << " " << "is" << " " << N - 1 << ".";
    return 0;
}