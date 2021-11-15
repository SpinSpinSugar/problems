#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int counter = 2;
    int max = 0;
    int min = 0;
    cin >> min;
    cin >> max;
    while (cin  >> n)
    {
        counter += 1;
        if ((counter % 2) == 0)
        {
            if (max < n)
            {
                max = n;
            }
        }
        else
        {
            if (min > n)
            {
                min = n;
            }
        }
    }
    cout << max + min;
    return EXIT_SUCCESS;
}