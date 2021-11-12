#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	vector<int> array(0);
	int n = 0;
	int t = 0;
	int b = 0;
	string y = "";
	while (true)
	{
		system("cls");
		setlocale(LC_ALL, "Russian");
		cout << "Введите число" << endl;
		cout << "0. Выход из программы." << endl;
		cout << "1. Вывод текущего состояния массива." << endl;
		cout << "2. Добавить элемент в конец массива. Если capacity не хватает, оно должно умножиться на 2." << endl;
		cout << "3. Добавить элемент в начало массива." << endl;
		cout << "4. Удалить элемент из конца массива." << endl;
		cout << "5. Удалить элемент из начала массива." << endl;
		cout << "6. Развернуть массив.Элементы массива должны встать в обратном порядке." << endl;
		cin >> n;
		switch (n)
		{
		case 0:
			return EXIT_SUCCESS;
		case 1:
			system("cls");
			for (int i = 0; i < array.size(); i++)
			{
				cout << array[i] << " ";
			}
			if (array.size() == 0)
			{
				cout << "Пусто";
			}
			cout << endl;
			cout << "Введите Y чтоб продолжить" << endl;

			cin >> y;
			if ((y == "y") or (y == "Y"))
			{
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "Введите число:" << endl;
			cin >> t;
			if (array.capacity() == array.size())
			{
				array.reserve(2 * array.capacity());
			}
			array.push_back(t);
			system("cls");
			break;
		case 3:
			system("cls");
			cout << "Введите число:" << endl;
			cin >> b;
			if (array.capacity() == array.size())
			{
				array.reserve(2 * array.capacity());
			}
			array.insert(array.begin(), 1, b);
			system("cls");
			break;
		case 4:
			array.pop_back();
			break;
		case 5:
			array.erase(array.begin());
			break;
		case 6:
			system("cls");
			vector<int> temp_array(array.size());
			int counter = 0;
			for (int i = array.size() - 1; i >= 0; i--)
			{
				temp_array[counter] = array[i];
				counter += 1;
			}
			for (int i = 0; i < array.size(); i++)
			{
				array[i] = temp_array[i];
			}
			break;
		}
	}
}