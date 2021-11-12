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
		cout << "������� �����" << endl;
		cout << "0. ����� �� ���������." << endl;
		cout << "1. ����� �������� ��������� �������." << endl;
		cout << "2. �������� ������� � ����� �������. ���� capacity �� �������, ��� ������ ���������� �� 2." << endl;
		cout << "3. �������� ������� � ������ �������." << endl;
		cout << "4. ������� ������� �� ����� �������." << endl;
		cout << "5. ������� ������� �� ������ �������." << endl;
		cout << "6. ���������� ������.�������� ������� ������ ������ � �������� �������." << endl;
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
				cout << "�����";
			}
			cout << endl;
			cout << "������� Y ���� ����������" << endl;

			cin >> y;
			if ((y == "y") or (y == "Y"))
			{
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "������� �����:" << endl;
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
			cout << "������� �����:" << endl;
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