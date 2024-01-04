#include <iostream>
#include <cctype>
#include <Windows.h>

int case3()
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

		if ((int)a > 48  &&  (int)a < 57)
		{
			cout << "Код цифры:" << ends;
			cout << static_cast<int>(a) << endl << endl;
		}

		else
		{
			cout << "Ошибка!" << endl;
		}
	}
	return 0;
}