#include <iostream>
 
using namespace std;
 
int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    cin >> n >> m;
    int* a = new int[n]();
    int* b = new int[m]();
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int* a_unique = new int[n]();
    int n_unique = 0;
    int k = 0;
    bool ind = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                ind = 1;
            }
        }
        if (ind == 0)
        {
            a_unique[k] = a[i];
            k++;
        }
        ind = 0;
    }
    n_unique = k;
 
    int* b_unique = new int[m]();
    int m_unique = 0;
    k = 0;
    ind = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (b[i] == b[j])
            {
                ind = 1;
            }
        }
        if (ind == 0)
        {
            b_unique[k] = b[i];
            k++;
        }
        ind = 0;
    }
    m_unique = k;
 
    int* final = new int[n_unique + m_unique]();
    for (int i = 0; i < n_unique; i++)
    {
        final[i] = a_unique[i];
    }
    for (int i = 0; i < m_unique; i++)
    {
        final[i+n_unique] = b_unique[i];
    }
 
    /*for (int i = 0; i < n_unique + m_unique; i++)
    {
        cout << final[i] << " ";
    }
    cout << endl;*/
 
    int* final_unique = new int[n_unique + m_unique]();
    int f_unique = 0;
    k = 0;
    ind = 0;
    for (int i = 0; i < n_unique + m_unique; i++)
    {
        for (int j = i + 1; j < n_unique + m_unique; j++)
        {
            if (final[i] == final[j])
            {
                ind = 1;
            }
        }
        if (ind == 1)
        {
            final_unique[k] = final[i];
            k++;
        }
        ind = 0;
    }
    f_unique = k;
     
 
    for (int i = 0; i < f_unique - 1; i++)
    {
        for (int j = 0; j < f_unique - i - 1; j++)
        {
            if (final_unique[j] > final_unique[j + 1])
            {
                swap(final_unique[j], final_unique[j + 1]);
            }
        }
    }
    for (int i = 0; i < f_unique; i++)
    {
        cout << final_unique[i] << " ";
    }
    return EXIT_SUCCESS;
}