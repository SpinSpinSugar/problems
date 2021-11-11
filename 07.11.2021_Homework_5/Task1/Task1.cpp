#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int n = 0;
    int m = 0;
    cin >> a >> n >> m;
    int nbit = (a & (1 << n)) >> n; //вычисляем n-ый бит числа а
                                    //                       a = xxzxxyxx
                                    // (n = 2), (тогда 1 << n) = 00000100
                                    //            a & (1 << n) = 00000y00
                                    //     (a & (1 << n)) >> n = y
    a = a & (~(1 << n)); //обнуляем n-ый бит: a = xxzxx0xx
    int mbit = (a & (1 << m)) >> m; //m-ый бит
                                    //                       a = xxzxx0xx
                                    // (m = 2), (тогда 1 << m) = 00100000
                                    //            a & (1 << m) = 00z00000
                                    //     (a & (1 << m)) >> m = z
    a = a & (~(1 << m)); //обнуляем m-ый бит: a = xx0xx0xx
    a = a | (nbit << m) | (mbit << n); //              a = xx0xx0xx
                                       //  | (nbit << m) = 00y00000
                                       //  | (mbit << n) = 00000z00
                                       //                = xxyxxzxx
    cout << a;
    return EXIT_SUCCESS;
}