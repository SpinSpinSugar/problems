#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char* argv[])
{
	int capacity = 1;
	int* array = new int[capacity] { 0 };
	int choice = 0;
	int size = 0;
	int capacity_1 = 0;
	int capacity_2 = 0;
	string y = "";
	while (true)
	{
		system("cls");
		
		/* DEBUG
		cout << "Capacity: " << capacity << endl;
		cout << "Size: " << size << endl;
		*/

		//MENU
		setlocale(LC_ALL, "Russian");
		cout << "Введите число" << endl;
		cout << "0. Выход из программы." << endl;
		cout << "1. Вывод текущего состояния массива." << endl;
		cout << "2. Добавить элемент в конец массива. Если capacity не хватает, оно умножается на 2" << endl;
		cout << "3. Добавить элемент в начало массива." << endl;
		cout << "4. Удалить элемент из конца массива." << endl;
		cout << "5. Удалить элемент из начала массива." << endl;
		cout << "6. Развернуть массив.Элементы массива должны встать в обратном порядке." << endl;
		cin >> choice;

		//UPDATING THE CAPACITY OF TEMPORARY ARRAYS BASED ON choice
		capacity_1 = capacity;
		capacity_2 = capacity;
		if ((capacity == size) & (choice == 2))
		{
			capacity_1 = capacity * 2; //case 2
		}
		if ((capacity_2 == size) & (choice == 3))
		{
			capacity_2 = ++capacity; //case 3
		}

		//TEMPORARY ARRAYS INITIALIZATION WITH UPDATED CAPACITY
		int* temp_array_1 = new int[capacity_1] { 0 };
		int* temp_array_2 = new int[capacity_2] { 0 };
		int* temp_array_3 = new int[capacity] { 0 };
		int* temp_array_4 = new int[capacity] { 0 };

		switch (choice)
		{
		case 0:
			//MEMORY CLEANING
			delete[] array;
			delete[] temp_array_1;
			delete[] temp_array_2;
			delete[] temp_array_3;
			delete[] temp_array_4;
			return EXIT_SUCCESS;
		case 1:
			system("cls");
			for (int i = 0; i < size; i++)
			{
				cout << array[i] << " ";
			}
			if (size == 0)
			{
				cout << "Пусто";
			}
			cout << endl;
			cout << "Введите символ, чтоб продолжить:" << endl;

			cin >> y;
			break;
		case 2: //add an element at the end
			system("cls");
			for (int i = 0; i < size; ++i) //filling temporary array with old elements
			{
				temp_array_1[i] = array[i];
			}
			cout << "Введите число:" << endl;
			cin >> temp_array_1[size]; //placing new element on last spot
			array = temp_array_1; //updating main array
			for (int i = 0; i < size; ++i)
			{
				cout << array[i] << " ";
			}
			capacity = capacity_1;
			size += 1; //updating the size
			system("cls");
			break;
		case 3: //add an element at the beginning
			system("cls");
			for (int i = 0; i < size; ++i) //filling temporary array with old elements with shift i -> i+1
			{
				temp_array_2[i + 1] = array[i];
			}
			cout << "Введите число:" << endl;
			cin >> temp_array_2[0];
			array = temp_array_2;
			size += 1;
			system("cls");
			break;
		case 4: //deleting last element
			if (size == 0)
			{
				system("cls");
				cout << "ERROR! THERE IS NO ELEMENTS IN THIS ARRAY";
				cout << endl;
				cout << "Введите символ, чтоб продолжить:" << endl;

				cin >> y;
			}
			else
			{
				array[size - 1] = 0;
				--size;
			}
			break;
		case 5: //deleting first element
			if (size == 0)
			{
				system("cls");
				cout << "ERROR! THERE IS NO ELEMENTS IN THIS ARRAY";
				cout << endl;
				cout << "Введите символ, чтоб продолжить:" << endl;

				cin >> y;
			}
			else
			{
				for (int i = 0; i < size; ++i) //filling temporary array with old elements with shift i + 1 -> i
				{
					temp_array_3[i] = array[i + 1];
				}
				array = temp_array_3;
				--size;
			}
			break;
		case 6: //reversing the array
			system("cls");
			for (int i = 0; i < size; ++i)
			{
				temp_array_4[size - i - 1] = array[i];
			}
			array = temp_array_4;
			break;
		}
	}
}