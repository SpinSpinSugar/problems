#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    cin >> a >> b;
    int product = a * b;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    product = product / a;
    cout << product << endl;
    return EXIT_SUCCESS;
}