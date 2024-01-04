#include <iostream>
#include <cctype>
#include <Windows.h>

int case1()
{
	using namespace std;

	char a;
	int h, i;


	cout << "Введите количество повторений" << endl;
	cin >> h;

	for (i = 0; i < h; i++)
	{
		cout << "Введите символ" << endl;
		cin >> a;

		if (static_cast<int>(a) >= 65 && static_cast<int>(a) <= 90)
		{
			cout << "Разница:" << ends;
			cout << static_cast<int>(tolower(a)) - (int)(a) << endl;
		}

		else
		{
			if ((int)a >= 97  &&  (int)a <= 122)
			{
				cout << "Разница:" << ends;
				cout << static_cast<int>(a) -static_cast<int>(toupper(a)) << endl;
			}

			else
			{
				cout << "Ошибка!" << endl;
			}
		}
	}
	return 0;
}