#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    cin >> a;
    if (a >= 0)
    {
        cout << a;
    }
    else
    {
        a = ~a;
        int c = 0;
        int final_sum = 0;
        int sum = 0;
        for (int i = 7; i >= 0; i--)
        {
            sum = ((a >> i) ^ (1 >> i)) ^ c;
            c = ((a >> i) & (1 >> i)) | ((a >> i) & c) | ((1 >> i) & c);
            final_sum = (final_sum | sum) << 1;
        }
        final_sum = final_sum >> 1;
        if ((final_sum & 1) != 1)
        {
            cout << (final_sum | 2);
        }
        else
        {
            cout << (final_sum);
        }

    }
    return EXIT_SUCCESS;
}