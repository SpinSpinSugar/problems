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
		cout << "������� �����" << endl;
		cout << "0. ����� �� ���������." << endl;
		cout << "1. ����� �������� ��������� �������." << endl;
		cout << "2. �������� ������� � ����� �������. ���� capacity �� �������, ��� ���������� �� 2" << endl;
		cout << "3. �������� ������� � ������ �������." << endl;
		cout << "4. ������� ������� �� ����� �������." << endl;
		cout << "5. ������� ������� �� ������ �������." << endl;
		cout << "6. ���������� ������.�������� ������� ������ ������ � �������� �������." << endl;
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
				cout << "�����";
			}
			cout << endl;
			cout << "������� ������, ���� ����������:" << endl;

			cin >> y;
			break;
		case 2: //add an element at the end
			system("cls");
			for (int i = 0; i < size; ++i) //filling temporary array with old elements
			{
				temp_array_1[i] = array[i];
			}
			cout << "������� �����:" << endl;
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
			cout << "������� �����:" << endl;
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
				cout << "������� ������, ���� ����������:" << endl;

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
				cout << "������� ������, ���� ����������:" << endl;

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