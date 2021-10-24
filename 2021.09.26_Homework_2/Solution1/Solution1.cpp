#include <iostream>
#include <locale.h>
using namespace std;

int main()
	{
		setlocale(LC_ALL, "Russian");
		int n;
		cin >> n;
		if (n == 0)
		{
			cout << "ноль ";
		}
		else if (n / 100 != 0)
		{
			switch (n / 100)
			{
			case 1:
				cout << "сто ";
				break;
			case 2:
				cout << "двести ";
				break;
			case 3:
				cout << "триста ";
				break;
			case 4:
				cout << "четыреста ";
				break;
			case 5:
				cout << "пятьсот ";
				break;
			case 6:
				cout << "шестьсот ";
				break;
			case 7:
				cout << "семьсот ";
				break;
			case 8:
				cout << "восемьсот ";
				break;
			case 9:
				cout << "девятьсот ";
				break;
			}
		}
		if (((n % 100) / 10) != 0)
		{
			switch ((n / 10) % 10)
				{
				case 1:
					switch (n % 100)
						{
						case 10:
							cout << "десять бананов";
							break;
						case 11:
							cout << "одиннадцать бананов";
							break;
						case 12:
							cout << "двенадцать бананов";
							break;
						case 13:
							cout << "тринадцать бананов";
							break;
						case 14:
							cout << "четырнадцать бананов";
							break;
						case 15:
							cout << "пятнадцать бананов";
							break;
						case 16:
							cout << "шестнадцать бананов";
							break;
						case 17:
							cout << "семнадцать бананов";
							break;
						case 18:
							cout << "восемнадцать бананов";
							break;
						case 19:
							cout << "девятнадцать бананов";
							break;
						}
					break;
				case 2:
					cout << "двадцать ";
					break;
				case 3:
					cout << "тридцать ";
					break;
				case 4:
					cout << "сорок ";
					break;
				case 5:
					cout << "пятьдесят ";
					break;
				case 6:
					cout << "шестьдесят ";
					break;
				case 7:
					cout << "семьдесят ";
					break;
				case 8:
					cout << "восемьдесят ";
					break;
				case 9:
					cout << "девяносто ";
					break;
				}
		}
		if (((n % 100) / 10) != 1)
		{
			switch (n % 10)
			{
			case 0:
				cout << "бананов";
				break;
			case 1:
				cout << "один банан";
				break;
			case 2:
				cout << "два банана";
				break;
			case 3:
				cout << "три банана";
				break;
			case 4:
				cout << "четыре банана";
				break;
			case 5:
				cout << "пять бананов";
				break;
			case 6:
				cout << "шесть бананов";
				break;
			case 7:
				cout << "семь бананов";
				break;
			case 8:
				cout << "восемь бананов";
				break;
			case 9:
				cout << "девять бананов";
				break;
			}
		}
		return EXIT_SUCCESS;
	}