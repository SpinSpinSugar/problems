#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int* a = new int[n]();
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}

	// Вывод массива
	cout << "ARRAY : ";
	for (int i = 0; i <= n - 1; i++)
	{
		cout << a[i] << " ";
	}

	// Вывод четных
	cout << endl << "EVEN : ";
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	
	// Вывод суммы
	int sum = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		sum += a[i];
	}
	cout << "SUM : " << sum << endl;
	
	// Произведение отрицательных
	int prod_n = 1;
	int counter_n = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] < 0)
		{
			counter_n += 1;
		}
	}
	if (counter_n != 0)
	{
		for (int i = 0; i <= n - 1; i++)
		{
			if (a[i] < 0)
			{
				prod_n *= a[i];
			}
		}
		cout << "PRODUCT OF NEGATIVE : " << prod_n << endl;
	}
	else
	{
		cout << "PRODUCT OF NEGATIVE : " << 0 << endl;
	}

	// Индекс первого минимального элемента
	int min = a[0];
	int f_min_index = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			f_min_index = i;
		}
	}
	cout << "FIRST MIN INDEX : " << f_min_index << endl;

	// Второй по величине элемент
	int max = a[0];
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] >= max)
		{
			max = a[i];
		}
	}
	int max_2 = a[0];
	for (int i = 0; i <= n - 1; i++)
	{
		if ((a[i] >= max_2) && (a[i] != max))
		{
			max_2 = a[i];
		}
	}
	cout << "SECOND MAX : " << max_2 << endl;
	
	// Вывод в обратном порядке
	cout << "REVERSE : ";
	for (int i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// Вывод нечетных индексов
	cout << "ODD INDEXES : ";
	for (int i = 1; i <= n - 1; i += 2)
	{
		cout << a[i] << " ";
	}
	return EXIT_SUCCESS;
}