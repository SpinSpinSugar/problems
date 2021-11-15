#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    cin >> n;
    int* a = new int[n]();
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            a[i] = min;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return EXIT_SUCCESS;
}