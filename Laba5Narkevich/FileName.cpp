#include <iostream>
#include <cctype>
#include <Windows.h>
int case1();
int case2();
int case3();

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int s = 0;
	cout << "Введите число" << ends;
	cout << " 1 - Разница для латинского алфавита." << endl;
	cout << " 2 - Разница для русского алфавита." << endl;
	cout << " 3 - Вывод кода цифры." << endl;
	cout << " 4 - Выход из программы." << endl;
	cin >> s;
	switch (s)
	{
	case 1:
		case1();
		break;

	case 2:
		case2();
		break;

	case 3:
		case3();
		break;

	case(4):
		cout << "Вы вышли из программы!";
		break;
	default:
		cout << "Ошибка. Следуй инструкциям!";
		break;
	}
	return 0;
}
	// toupper из м в М
	// tolower из М в м
